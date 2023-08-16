#WebScraping using BeautifulSoup in Python3
import requests
from bs4 import BeautifulSoup
import lxml
url = "https://www.bloomberg.com/markets/currencies"
url_request =requests.get(url)
soup_request=BeautifulSoup(url_request.text,'lxml')
print(soup_request.find('head'))
#you have to download Beautifulsoup4 liberary &requests&lxml
