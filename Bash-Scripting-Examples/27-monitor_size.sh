#!/bin/bash
max=60
storage=$(df -h | grep /dev/sdb3 | awk '{print $5}')
echo "$storage"
val=${storage::-1} #print all except last one
echo "$val"
if [ "$val" -lt $max ]
then
#dockersize=$(doas du -h -s /var/lib/docker/overlay1 | awk '{print $1}')
notify-send "sdb3: $storage"
/usr/bin/python3 /usr/bin/x-terminal-emulator -e "/bin/sh -i -c \"watch df--h \""


fi