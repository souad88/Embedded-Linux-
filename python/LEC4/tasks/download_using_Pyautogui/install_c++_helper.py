import time
import g as h
########
#install C++ helper using Pyautogui
h.search_photo_clk('extension.png')
time.sleep(0.9)
h.search_photo_clk('search.png')
time.sleep(0.9)
h.write_ext('c++ helper')
h.search_photo_clk('install.png')
h.move_cursor(300,250) 
h.search_photo_clk('install.png')
time.sleep(1)