import requests 

city = input("Enter a city: ")
url_c = f"http://api.weatherapi.com/v1/forecast.json?key=b2273b21514c4decb2b45606240806&q={city}"

response = requests.get(url_c)
if response.status_code == 200:
    weather_data = response.json()
    tz = weather_data['location']['tz_id']
else:
        print(f'Error: Unable to fetch data. HTTP Status code: {response.status_code}')
        
print(tz)

url_t = f"http://worldtimeapi.org/api/timezone/{tz}"
response2 = requests.get(url_t)
if response2.status_code == 200:
    time_data = response2.json()
    ct = time_data['datetime']
else:
        print(f'Error: Unable to fetch data. HTTP Status code: {response2.status_code}')
print(ct)
