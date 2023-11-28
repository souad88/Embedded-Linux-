#!/bin/bash
read -p "enter youtube url : " url
#youtube-dl -F "$url"
#install youtube-dl
#--no-playlist                        Download only the video, if the URL refers to a video and a playlist.
#--yes-playlist 
yt-dlp --ignore-errors --format mp4 --output "%(title)s.%(ext)s" "$url"