from selenium import webdriver
from selenium.webdriver.common.keys import Keys
def google_():
 driver = webdriver.Firefox()
 driver.get('https://www.google.com')
 #driver.close() if user want 

#google_()
def search_google_(): #REcomended :to search for any word wanted by user
    driver=webdriver.Firefox()
    driver.get("https://www.google.com/search?q=healthylife")
    #driver.close() if user want    


    