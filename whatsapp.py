import pyautogui 
import time
time.sleep(8)
count=0
while count<=100:
    pyautogui.typewrite("bsdk")
    pyautogui.press("enter")
    count=count+1