#Current bitcoin using python
#!/usr/bin/env python
# This is my btc.py script.
import requests
response = requests.get('https://api.coindesk.com/v1/bpi/currentprice.json')
data = response.json()
print(data)
