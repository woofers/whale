#!/usr/bin/env bash

# Setup
set -o noclobber
OUT=export/html5/bin
INDEX=$OUT/index.html
TEMP=$OUT/temp.html

# Build game
rm -rf $OUT >> /dev/null
haxelib run openfl build Project.xml html5

# Apply custom CSS
cp $INDEX $TEMP
CSS="<style> #openfl-content { background: transparent !important; } <\/style>"
CSS=$CSS"<style> canvas { border-radius: 20px; } <\/style>"
sed "15s/$/ $CSS/" $TEMP >| $INDEX
rm $TEMP
