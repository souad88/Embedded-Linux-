#Hint:switch to Ubuntu Xorg
import pyautogui
import time

pyautogui.hotkey('win') #Open Win window
pyautogui.write('Write this --Hello Fayrouza :)') #write this where the cursor exists
time.sleep(1)#a Delay before Opening new window
pyautogui.hotkey('enter')
