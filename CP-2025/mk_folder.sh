#!/bin/bash

# Define the file to track the day count
TRACK_FILE="$HOME/.day_tracker"

# Check if the file exists; if not, create it and initialize with 1
if [[ ! -f "$TRACK_FILE" ]]; then
    echo 1 > "$TRACK_FILE"
fi

# Read the current day count
DAY_COUNT=$(cat "$TRACK_FILE")

# Get the current date in YY-MM-DD format
DATE=$(date +%y-%m-%d)

# Construct the folder name
FOLDER_NAME="day-${DAY_COUNT}-${DATE}"

# Create the folder in the current directory
mkdir -p "$FOLDER_NAME"

# Increment the day count and update the file
echo $((DAY_COUNT + 1)) > "$TRACK_FILE"

# Print a success message
echo "Folder '$FOLDER_NAME' created successfully!"
