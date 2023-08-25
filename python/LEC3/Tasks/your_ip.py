import requests
ip = requests.get('https://checkip.amazonaws.com').text.strip()
print(ip)

