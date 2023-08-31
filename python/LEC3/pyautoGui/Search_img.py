#Hint:switch to Ubuntu Xorg
#take a screen shot for Terminal window (Fn+prtSC) then Select then Enter
#paste your .Png  in your Current Folder
import pyautogui

import time 
import os
#Search in the current directory for the image_file and save path 

mypath=os.path.dirname(os.path.realpath(__file__))+"/terminal.png"
isfind=None
while isfind is None:
    isfind=pyautogui.locateOnScreen(mypath,confidence=0.7) #it will take screenshots untill 
                                                            #find Terminal window opened in the
                                                            #screen

print("I found the image")    