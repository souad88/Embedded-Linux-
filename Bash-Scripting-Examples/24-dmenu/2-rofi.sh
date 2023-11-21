#!/bin/bash
value="${HOME}/souad\n${HOME}/my_output.txt"
select=$(echo -e "$value" | rofi -dmenu)
nautilus "$select" &
