import os
import re
import datetime
from urllib.parse import quote # CRITICAL FIX: Imports quote for URL encoding

# --- Configuration ---
# 🌟 CONFIGURED FOR: Angkon-Kar/Cpp-DSA-Journey
GITHUB_USERNAME = "Angkon-Kar"
REPO_NAME = "Cpp-DSA-Journey"
BRANCH_NAME = "main" 
# List of folders/files to ignore
IGNORE_ITEMS = {'.git', '.github', 'update_readme.py', 'README.md', '__pycache__', '.vscode'}
# The base URL for linking to files on GitHub
BASE_URL = f"https://github.com/{GITHUB_USERNAME}/{REPO_NAME}/blob/{BRANCH_NAME}"
# ---------------------

def get_repo_structure(start_dir='.'):
    """Recursively scans the directory and returns a dictionary structure."""
    structure = {}
    
    # Sort the items to ensure the output is logically ordered
    items = sorted(os.listdir(start_dir))

    for item in items:
        if item in IGNORE_ITEMS or item.startswith('.'):
            continue

        full_path = os.path.join(start_dir, item)
        
        # Skip root-level files that are not C++ source
        if os.path.isfile(full_path) and not full_path.endswith(('.cpp', '.h')):
            continue

        relative_path = os.path.relpath(full_path, '.')

        if os.path.isdir(full_path):
            # If it's a directory, recursively call the function
            structure[item] = get_repo_structure(full_path)
        elif full_path.endswith(('.cpp', '.h')):
            # If it's a file, store its relative path
            structure[item] = relative_path
            
    return structure

def generate_markdown(structure, parent_path="", level=0):
    """
    Recursively generates Markdown bullet points and collects table entries.
    """
    markdown_list = ""
    table_entries = []
    
    # Custom sort key: directories first, then alphabetically
    sorted_items = sorted(structure.items(), key=lambda item: (not isinstance(item[1], dict), item[0]))

    for name, content in sorted_items:
        # Determine the display name (removing prefixes for cleaner look)
        clean_name = re.sub(r'^\d{1,2}[\.\)]\s*', '', name)
        
        if isinstance(content, dict):
            # It's a folder/topic
            
            # Use a heading for the top-level folders
            if level == 0:
                markdown_list += f"\n## 📁 {clean_name}\n"
            else:
                # Use bold sub-headings for sub-folders
                markdown_list += f"{'  ' * level}* **{name}**\n"
            
            # Recursively process subfolders/files
            sub_list, sub_table = generate_markdown(content, name, level + 1)
            markdown_list += sub_list
            table_entries.extend(sub_table)
            
        else:
            # It's a file
            file_path = content
            
            # CRITICAL FIX: URL-encode the path
            # This turns paths like "01. Input & Output/..." into "01.%20Input%20%26%20Output/..."
            encoded_path = quote(file_path.replace(os.path.sep, '/'))
            file_link = f"{BASE_URL}/{encoded_path}"
            
            # 1. Add to bullet list 
            markdown_list += f"{'  ' * level}* 📄 [{clean_name.replace('.cpp', '').replace('.h', '')}]({file_link})\n"
            
            # 2. Add to Table (only for .cpp files, typically)
            if file_path.endswith('.cpp'):
                path_parts = file_path.split(os.path.sep)
                
                main_topic = path_parts[0] if path_parts else 'Root'
                
                sub_topic_path = path_parts[1:-1]
                detailed_topic = os.path.join(*sub_topic_path) if sub_topic_path else main_topic

                table_entries.append((main_topic, detailed_topic, clean_name.replace('.cpp', ''), file_link))

    return markdown_list, table_entries

def create_readme():
    """Main function to generate and save the README.md content."""
    
    # 1. Scan the repository
    structure_map = get_repo_structure()

    # 2. Generate content
    structure_markdown, file_table_data = generate_markdown(structure_map)

    # 3. Construct the full README content
    
    # FIX: Initialize readme_content as a LIST of strings to allow .append()
    readme_content = [] 
    
    # Header and Instructions
    readme_content.append(f"""# 📚 Angkon-Kar's C++ DSA Journey Index

This index provides a complete, hyperlinked guide to the code structure of my C++ DSA learning repository.

This index is **automatically generated** by a GitHub Action, ensuring it always matches the latest files in the `{BRANCH_NAME}` branch.

## 📄 Repository Structure

This section outlines the entire folder hierarchy and provides direct links to every source file.

{structure_markdown}

---

## 🚀 Quick Access: All Code Files

This table provides quick search access to all C++ files, categorized by topic.

| Main Topic | Sub-Topic/Folder Path | File Description | Link to Code |
| :--- | :--- | :--- | :--- |
""")

    # 4. Add table rows
    for main_topic, sub_topic, display_name, link in file_table_data:
        display_sub_topic = sub_topic if sub_topic != main_topic else '---'
        readme_content.append(f"| **{main_topic}** | {display_sub_topic} | {display_name} | [View Code]({link}) |\n")

    # Footer with Timestamp
    readme_content.append("\n---\n")
    readme_content.append(f"*README generated on {datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%d %H:%M:%S')} UTC*\n")

    # 5. Write the file by joining the list items into one large string
    with open("README.md", "w", encoding="utf-8") as f:
        f.write("".join(readme_content))

if __name__ == "__main__":
    create_readme()