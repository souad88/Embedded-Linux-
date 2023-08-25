#write a code to suggest automatically activates for you 
from time import sleep
import requests
while True :
    url=requests.get("https://www.boredapi.com/api/activity")
    print(url.json()['activity'])
    sleep(2)
    