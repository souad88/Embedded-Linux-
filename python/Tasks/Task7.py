
#Web scarping using bs4

import requests
from bs4 import BeautifulSoup 
import lxml
url= "https://www.bloomberg.com/markets/currencies"
get_url=requests.get(url)
return_soup=BeautifulSoup(get_url.text,'lxml')
print(return_soup.find('head'))

#how to install BeutifulSoup in Ubuntu :
#Open Terminal in Ubuntu $ sudo apt install python3-pip
#                        $pip3 --version
#                        $ pip3 install beautifulsoup4
#                        $pip3 install lxml
