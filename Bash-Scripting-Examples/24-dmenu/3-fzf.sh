#!/bin/bash
value="${SOUAD}/ex_arabawy\n${SOUAD}/Fayrouz\n${SOUAD}/task_cmake"
select=$(echo -e "$value" | fzf)
nautilus "$select" &