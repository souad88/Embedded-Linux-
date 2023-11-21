#!/bin/bash
battery_path="/sys/class/power_supply/BAT0/capacity"
battery_value=$(cat $battery_path)
if [ "${battery_value}" -lt 120 ]
then
    notify-send "battery is less than 50"
fi    