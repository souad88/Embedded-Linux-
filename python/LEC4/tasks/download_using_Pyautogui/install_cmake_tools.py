import time
import g as h
##############
#install Cmake tools using Pyautogui
h.search_photo_clk('extension.png')
time.sleep(0.9)
h.search_photo_clk('search.png')
time.sleep(0.9)
h.write_ext('CMake Tools')
h.search_photo_clk('install.png')
h.move_cursor(300,250) 
h.search_photo_clk('install.png')
time.sleep(1)