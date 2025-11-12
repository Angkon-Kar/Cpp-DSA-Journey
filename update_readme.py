import os
import re
import datetime
from urllib.parse import quote 

# --- Configuration ---
# 🌟 CRITICAL: Must be named 'update_readme.py' in the root folder. 
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
    items = sorted(os.listdir(start_dir))

    for item in items:
        if item in IGNORE_ITEMS or item.startswith('.'):
            continue

        full_path = os.path.join(start_dir, item)
        
        if os.path.isfile(full_path) and not full_path.endswith(('.cpp', '.h')):
            continue

        relative_path = os.path.relpath(full_path, '.')

        if os.path.isdir(full_path):
            structure[item] = get_repo_structure(full_path)
        elif full_path.endswith(('.cpp', '.h')):
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

    for i, (name, content) in enumerate(sorted_items):
        # Determine the display name (removing prefixes for cleaner look)
        clean_name = re.sub(r'^\d{1,2}[\.\)]\s*', '', name)
        
        if isinstance(content, dict):
            # It's a folder/topic
            
            # Use H2 heading for top-level folders (e.g., "01. Basics")
            if level == 0:
                markdown_list += f"\n## 📚 {name}. {clean_name}\n"
            # Use numbered list for sub-level folders (e.g., "1. Input & Output")
            elif level == 1:
                 # Use the index 'i' to create a numbered list for the 1st sub-level
                markdown_list += f"1. **{clean_name}**\n"
            else:
                 # Use square bullet for deeply nested folders
                 markdown_list += f"{'  ' * level}* **{name}**\n"
            
            # Recursively process subfolders/files
            sub_list, sub_table = generate_markdown(content, name, level + 1)
            markdown_list += sub_list
            table_entries.extend(sub_table)
            
        else:
            # It's a file
            file_path = content
            
            # CRITICAL FIX: URL-encode the path to handle spaces
            encoded_path = quote(file_path.replace(os.path.sep, '/'))
            file_link = f"{BASE_URL}/{encoded_path}"
            
            # Use a clean square bullet for the file listing
            markdown_list += f"{'  ' * level}* 📄 [{clean_name.replace('.cpp', '').replace('.h', '')}]({file_link})\n"
            
            # 2. Add to Table
            if file_path.endswith('.cpp'):
                path_parts = file_path.split(os.path.sep)
                
                # Main Topic is the root folder (e.g., '01. Basics')
                main_topic = path_parts[0] if path_parts else 'Root'
                
                # Sub-Topic is the path between the main topic and the file
                sub_topic_path = path_parts[1:-1]
                detailed_topic = os.path.join(*sub_topic_path) if sub_topic_path else main_topic

                table_entries.append((main_topic, detailed_topic, clean_name.replace('.cpp', ''), file_link))

    return markdown_list, table_entries

def create_readme():
    """Main function to generate and save the README.md content."""
    
    structure_map = get_repo_structure()
    structure_markdown, file_table_data = generate_markdown(structure_map)

    # Initialize readme_content as a LIST of strings (FIX for AttributeError)
    readme_content = [] 
    
    # Header and Instructions
    readme_content.append(f"""# 🚀 Angkon-Kar's C++ DSA Journey Index

This repository serves as my structured journey through C++ Data Structures and Algorithms.

This index is **automatically generated** by a GitHub Action, ensuring it always reflects the latest structure and code.

## 📖 Repository Structure

This section outlines the entire folder hierarchy and provides direct links to every source file.

{structure_markdown}

---

## 💾 Quick Access Table

This table provides a quick, searchable index to all C++ files, categorized by their main topic and folder path.

| Main Topic | Sub-Folder Path | File Description | Link to Code |
| :--- | :--- | :--- | :--- |
""")

    # 4. Add table rows
    for main_topic, sub_topic, display_name, link in file_table_data:
        # If sub_topic is the same as main_topic, display '---'
        display_sub_topic = sub_topic if sub_topic != main_topic else '---'
        readme_content.append(f"| **{main_topic.replace('0', '').replace('.', '')}** | {display_sub_topic} | {display_name} | [View Code]({link}) |\n")

    # Footer with Timestamp
    readme_content.append("\n---\n")
    readme_content.append(f"*README updated on {datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%d %H:%M:%S')} UTC*\n")

    # 5. Write the file by joining the list items into one large string
    with open("README.md", "w", encoding="utf-8") as f:
        f.write("".join(readme_content))

if __name__ == "__main__":
    create_readme()