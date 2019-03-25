#!/usr/bin/env bash

# Setup
set -o noclobber
OUT=dist
INDEX=$OUT/index.html
TEMP=$OUT/temp.html

# Apply custom CSS
cp $INDEX $TEMP
CSS="<style> #openfl-content { background: transparent !important; } <\/style>"
CSS=$CSS"<style> canvas { border-radius: 20px; } <\/style>"
sed "15s/$/ $CSS/" $TEMP >| $INDEX
rm $TEMP
