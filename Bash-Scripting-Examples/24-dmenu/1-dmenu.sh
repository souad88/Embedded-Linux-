#!/bin/bash
value="${HOME/SOUAD}/ex_arabawy\n${HOME/SOUAD}/Fayrouz\n${HOME/SOUAD}/task_cmake"
select=$(echo -e "$value" | dmenu)
nautilus "$select" &
