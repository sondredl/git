#!/bin/bash

# Function to format a single file
format_file() {
    local file=$1
    clang-format -i "$file"
    git add "$file"
}

# Get the list of files in the staging area
staged_files=$(git diff --cached --name-only --diff-filter=ACM | grep -E '\.(c|cpp|h|hpp)$')

if [ -z "$staged_files" ]; then
    echo "No files to format."
    exit 0
fi

# Iterate over each file and format it
for file in $staged_files; do
    if [ -f "$file" ]; then
        format_file "$file"
        echo "Formatted and restaged: $file"
    else
        echo "Skipped (not a file): $file"
    fi
done

echo "All staged files formatted."
