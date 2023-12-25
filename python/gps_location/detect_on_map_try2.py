import time
import paho.mqtt.client as mqtt
import folium
from folium.plugins import MarkerCluster
import webbrowser
#start position
#down_town
#latitude= 30.0170955
#longitude= 31.4129432

latitude= 26.2540493
longitude= 29.2675469
 
values=range(30)
def zoom_in_map():
    pass

m = folium.Map(location=[latitude, longitude], zoom_start=15)
mc = MarkerCluster().add_to(m)
m.add_child(mc)
marker = None
#while True:
if latitude and longitude:
      #how to remove marker concurrently 
      #when adding while and multiple lang and lat
        marker = folium.Marker(location=[latitude, longitude])
        mc.add_child(marker)
        n=m.save("current_location2.html")
        webbrowser.open('file:///home/souad/Desktop/GitHub_/Embedded-Linux-/python/gps_location/current_location2.html')

time.sleep(1)
