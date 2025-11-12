import os
import re
import datetime
from collections import defaultdict # This import is not strictly needed for this simplified script, but kept for safety

# --- Configuration ---
# 🌟 CRITICAL FIX: Setting the correct repository name (Cpp-DSA-Journey) 🌟
GITHUB_USERNAME = "Angkon-Kar"
REPO_NAME = "Cpp-DSA-Journey"
# List of folders/files to ignore
IGNORE_ITEMS = {'.git', '.github', 'generate_readme.py', 'README.md', '__pycache__', '.vscode'}
# The base URL for linking to files on GitHub
BASE_URL = f"https://github.com/{GITHUB_USERNAME}/{REPO_NAME}/blob/main"
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
            
            # Use a heading for the top-level folders (01. Basics, 02. STL, etc.)
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
            # CRITICAL FIX: Use forward slashes for URLs
            file_link = f"{BASE_URL}/{file_path.replace(os.path.sep, '/')}" 
            
            # 1. Add to bullet list (Using file icon for clear visual structure)
            markdown_list += f"{'  ' * level}* 📄 [{clean_name.replace('.cpp', '').replace('.h', '')}]({file_link})\n"
            
            # 2. Add to Table (only for .cpp files, typically)
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
    
    # 1. Scan the repository
    structure_map = get_repo_structure()

    # 2. Generate content
    structure_markdown, file_table_data = generate_markdown(structure_map)

    # 3. Construct the full README content
    readme_content = f"""# 📚 Angkon-Kar's C++ DSA Journey Index

This index provides a complete, hyperlinked guide to the code structure of my C++ DSA learning repository.

This index is **automatically generated** by a GitHub Action, ensuring it always matches the latest files in the `main` branch.

## 📄 Repository Structure

This section outlines the entire folder hierarchy and provides direct links to every source file.

{structure_markdown}

---

## 🚀 Quick Access: All Code Files

This table provides quick search access to all C++ files, categorized by topic.

| Main Topic | Sub-Topic/Folder Path | File Description | Link to Code |
| :--- | :--- | :--- | :--- |
"""

    # 4. Add table rows
    for main_topic, sub_topic, display_name, link in file_table_data:
        # If sub_topic is the same as main_topic (files are directly in the main folder), display 'Root' or '---'
        display_sub_topic = sub_topic if sub_topic != main_topic else '---'
        readme_content += f"| **{main_topic}** | {display_sub_topic} | {display_name} | [View Code]({link}) |\n"

    # Footer with Timestamp
    readme_content.append("\n---\n")
    readme_content.append(f"*README generated on {datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%d %H:%M:%S')} UTC*\n")

    # 5. Write the file
    with open("README.md", "w", encoding="utf-8") as f:
        f.write(readme_content)

if __name__ == "__main__":
    create_readme()