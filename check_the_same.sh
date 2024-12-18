#!/bin/bash

main_folder="./submissions"  # Specify the path to the main folder containing the subfolders

# Get a list of subfolders in the main folder
subfolders=$(ls -d "$main_folder"/*/)

# Iterate over each subfolder
for subfolder in $subfolders; do
    echo "Processing folder: $subfolder"
    echo "------------------------------"

    # Get a list of files in the subfolder
    files=$(ls "$subfolder")

    # Iterate over each pair of files
    for file1 in $files; do
        for file2 in $files; do
            if [[ "$file1" != "$file2" ]]; then
                echo "Comparing $file1 and $file2"
				diff -b -B -d -w -s -i -q "$subfolder/$file1" "$subfolder/$file2"
                echo "---------------------------------------"
            fi
        done
    done

    echo
done
