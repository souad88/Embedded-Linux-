import pyautogui
def search_photo_clk(photo_name):
     position = pyautogui.locateCenterOnScreen(photo_name, confidence = 0.7)#If the file is not a png file it will not work
     print(position)
     pyautogui.moveTo(position)#Moves the mouse to the coordinates of the imag
     pyautogui.click(position)
     pyautogui.doubleClick(position)
def write_ext(ext_nam):     
    pyautogui.write(ext_nam)

def move_cursor(x,y):
    pyautogui.moveTo(x,y)
   