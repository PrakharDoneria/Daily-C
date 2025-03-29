import os
import time

base_dir = r"D:\Projects\Daily C"

day = 1
while True:
    folder_path = os.path.join(base_dir, f"Day {day}")

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
        print(f"{folder_path} does not exist. Cleaning process complete.")
        break

    time.sleep(1)