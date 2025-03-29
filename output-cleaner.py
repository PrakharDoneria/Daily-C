import os
import time

base_dir = r"D:\Projects\Daily C"
projects_dir = os.path.join(base_dir, "PROJECTS")

day = 1
while True:
    # Handle 'Day {day}' folder paths
    folder_path = os.path.join(base_dir, f"Day {day}")

    # Check if 'Day {day}' folder exists
    if os.path.exists(folder_path):
        print(f"Scanning {folder_path}...")

        for root, dirs, files in os.walk(folder_path):
            for file in files:
                if file.endswith(".exe"):
                    file_path = os.path.join(root, file)
                    try:
                        os.remove(file_path)
                        print(f"Deleted: {file_path}")
                    except Exception as e:
                        print(f"Error deleting {file_path}: {e}")
        
        day += 1
    else:
        print(f"{folder_path} does not exist.")

    # Now handle the 'PROJECTS' directory
    if os.path.exists(projects_dir):
        print(f"Scanning {projects_dir}...")

        for root, dirs, files in os.walk(projects_dir):
            for file in files:
                if file.endswith(".exe"):
                    file_path = os.path.join(root, file)
                    try:
                        os.remove(file_path)
                        print(f"Deleted: {file_path}")
                    except Exception as e:
                        print(f"Error deleting {file_path}: {e}")
    else:
        print(f"{projects_dir} does not exist.")

    print("Cleaning process complete.")
    break