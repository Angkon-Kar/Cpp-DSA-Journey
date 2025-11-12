import os
import re

# --- Configuration ---
# 🌟 CONFIGURED FOR: Angkon-Kar/Cpp-DSA-Journey 🌟
GITHUB_USERNAME = "Angkon-Kar"
REPO_NAME = "Cpp-DSA-Journey"
# List of folders/files to ignore (like .git, .vscode, the script itself)
IGNORE_ITEMS = {'.git', '.github', 'generate_readme.py', 'README.md', '__pycache__', '.vscode'}
# The base URL for linking to files on GitHub (using 'main' branch)
BASE_URL = f"https://github.com/{GITHUB_USERNAME}/{REPO_NAME}/blob/main"
# ---------------------

def get_repo_structure(start_dir='.'):
    """Recursively scans the directory and returns a dictionary structure."""
    structure = {}
    
    # Sort the items to ensure the output is logically ordered (like the 'tree' command)
    items = sorted(os.listdir(start_dir))

    for item in items:
        if item in IGNORE_ITEMS or item.startswith('.'):
            continue

        full_path = os.path.join(start_dir, item)
        relative_path = os.path.relpath(full_path, '.')

        if os.path.isdir(full_path):
            # If it's a directory, recursively call the function
            structure[item] = get_repo_structure(full_path)
        elif full_path.endswith(('.cpp', '.h')): # Include .h files as well
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
        current_path = os.path.join(parent_path, name)
        indent = '  ' * level # 2 spaces per level

        if isinstance(content, dict):
            # It's a folder/topic
            markdown_list += f"{indent}* **{name}**\n"
            # Recursively process subfolders/files
            sub_list, sub_table = generate_markdown(content, current_path, level + 1)
            markdown_list += sub_list
            table_entries.extend(sub_table)
            
        else:
            # It's a file (.cpp or .h file)
            file_path = content
            # Replace backslashes with forward slashes for URL compatibility
            file_link = f"{BASE_URL}/{file_path.replace(os.path.sep, '/')}" 
            
            # 1. Add to bullet list 
            markdown_list += f"{indent}* [{name}]({file_link})\n"
            
            # 2. Add to Table for structured indexing
            path_parts = file_path.split(os.path.sep)
            
            # Determine the main topic (e.g., '01. Basics')
            topic = path_parts[0] if path_parts else 'Root'
            
            # Clean up the file name for the table (remove number prefixes and file extension)
            display_name = re.sub(r'^\d{1,2}[\.\)]\s*', '', name) # Remove "01." or "1)" prefixes
            display_name = display_name.replace('.cpp', '').replace('.h', '')
            
            # Use the full path excluding the root and the file name as the detailed topic
            sub_topic_path = path_parts[1:-1]
            detailed_topic = os.path.join(*sub_topic_path) if sub_topic_path else topic

            table_entries.append((topic, detailed_topic, display_name, file_link))

    return markdown_list, table_entries

def create_readme():
    """Main function to generate and save the README.md content."""
    
    # 1. Scan the repository
    structure_map = get_repo_structure()

    # 2. Generate content
    structure_markdown, file_table_data = generate_markdown(structure_map)

    # 3. Construct the full README content
    
    # Header and Instructions
    readme_content = f"""# 📚 C++ DSA Journey Index

A collection of all C++ code and DSA concepts by Angkon-Kar.

This index is **automatically generated** using a GitHub Action and Python script (`generate_readme.py`). 
It reflects the current folder structure and provides direct links to all C++ source files.

## 📁 File Structure & Topics

The detailed file tree mirrors the structure of the repository:

{structure_markdown}

---

## 🚀 Quick Access: Code Files

| Main Topic | Sub-Topic/Path | File Description | Link to Code |
| :--- | :--- | :--- | :--- |
"""

    # 4. Add table rows
    for main_topic, sub_topic, display_name, link in file_table_data:
        # If sub_topic is the same as main_topic (i.e., files are directly in the root folder), simplify it
        display_sub_topic = sub_topic if sub_topic != main_topic else '---'
        readme_content += f"| **{main_topic}** | {display_sub_topic} | {display_name} | [View Code]({link}) |\n"

    # 5. Write the file
    with open("README.md", "w", encoding="utf-8") as f:
        f.write(readme_content)

    print("Successfully generated README.md with updated structure and links.")

if __name__ == "__main__":
    create_readme()