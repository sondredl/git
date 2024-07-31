import os
import subprocess

def main():
    # Check if .gitmodules file exists
    if not os.path.isfile('.gitmodules'):
        print(".gitmodules file not found!")
        return

    # Initialize submodules if not already done
    subprocess.run(['git', 'submodule', 'init'], check=True)

    # Read the .gitmodules file
    with open('.gitmodules', 'r') as f:
        lines = f.readlines()

    # Parse the paths and urls of submodules from .gitmodules file
    submodule_info = {}
    current_path = None
    current_url = None

    for line in lines:
        if 'path =' in line:
            current_path = line.split('=')[1].strip()
        elif 'url =' in line:
            current_url = line.split('=')[1].strip()
        
        if current_path and current_url:
            submodule_info[current_path] = current_url
            current_path = None
            current_url = None

    # Check if each submodule directory exists and clone if missing
    for path, url in submodule_info.items():
        if not os.path.isdir(path):
            print(f"Cloning missing submodule: {path} from {url}")
            subprocess.run(['git', 'clone', url], check=True)
            subprocess.run(['git', 'submodule', 'add', url, path], check=True)
        else:
            print(f"Submodule already cloned: {path}")

if __name__ == "__main__":
    main()
    
