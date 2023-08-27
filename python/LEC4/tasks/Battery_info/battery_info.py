import psutil

battery_status = psutil.sensors_battery()
print(battery_status)
