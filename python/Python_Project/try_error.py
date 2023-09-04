import os
from gtts import gTTS
import playsound
from time import ctime
import speech_recognition as sr
import webbrowser
#jack_control start
from threading import Event
delay=5
r=sr.Recognizer()
def speak(voice_data):
	t=gTTS(text=voice_data,lang='en')
	audio='voice.mp3'
	t.save(audio)
	playsound.playsound(audio)
	print(voice_data)
	os.remove(audio)



def record(ask=False):
    with sr.Microphone(device_index=None) as source:
        r.adjust_for_ambient_noise(source,1)
        if ask:
            speak(ask)
        audio=r.listen(source)
        voice_data= ''
        try:
            voice_data=r.recognize_google(audio, language="en")
        except sr.UnknownValueError:
            speak("sorry")
        return voice_data.lower()


print("speeking...")
speak("Hello ")
print("listening...")
my_talk=record()
print(my_talk)
#Event().wait(1)
speak(my_talk)