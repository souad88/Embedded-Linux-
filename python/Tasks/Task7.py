#find automatically bitcoin rate
from bs4 import BeautifulSoup as BS
import requests
def price(url):
    data=requests.get(url)
    soup=BS(data.text,'html.parser')
    ans=soup.find("div",class_="BNeawe iBp4i AP7Wnd").text
    return ans
url="https://www.google.com/search?q = bitcoin + price"
ans=price(url)
print(ans)