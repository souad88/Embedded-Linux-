#Auther :Souad Gamal#
#jack_control start
from ctypes import *
import speech_recognition as sr
import pyttsx3 as py #install pyttsx3 ,libespeak1 
import playsound 
import pyaudio
from gtts import gTTS
import os
import wolframalpha
from selenium import webdriver
import pywhatkit
import youtube as y 
import open_google as g
import whatsapp_ as w
import my_code as c_ 
##if there is an error with ALSA ..in terminal print (voice_google_assistant.py 2>/dev/null)
#import ALSA_HANDLE_ERROR as solution
ERROR_HANDLER_FUNC = CFUNCTYPE(None, c_char_p, c_int, c_char_p, c_int, c_char_p)
def py_error_handler(filename, line, function, err, fmt):
  print ('messages are yummy')
c_error_handler = ERROR_HANDLER_FUNC(py_error_handler)

asound = cdll.LoadLibrary('libasound.so')
# Set error handler
#asound.snd_lib_error_set_handler(c_error_handler)
# Initialize PyAudio
p = pyaudio.PyAudio()
##############
#solution.handle_alsa_error()
def speak(message):
    print("Speeking....")
    voice_assistant.say(message)
    voice_assistant.runAndWait()

#ALSA_ERROR_SOLUTION()
#Defining VOICE_ASSISTANT
r=sr.Recognizer()
voice_assistant=py.init()
voice_assistant.setProperty('rate',130) #Speed of Speeking
voice = voice_assistant.getProperty('voices')#get all voices
voice_assistant.setProperty('voice', 'english_rp+f4')#change voice to Female_voice in UBUNTU
##MARY Speak....

#######Speach Recognition by google


def Me_talk():
    with sr.Microphone() as source:
        # ALSA_ERROR_SOLUTION()
        #r.energy_threshold=30000
        r.energy_threshold=10000
        r.adjust_for_ambient_noise(source,1.2)
        print("listening.........")
        my_voice=r.listen(source)
        #my_voice=r.listen(source)
        #Convert my Speeking into words by google
        try:
            text = r.recognize_google(my_voice)
            print(text)
            return text
        except:
            speak("what")
            print("sorry, could not recognise")
            Me_talk()
            
            
###### Web applications####         
def My_command(text):
    if(text=='Send whats number'):
        pass
    elif(text=='open youtube'):
        y.youtube_()
    elif(text=='open google'):
         g.google_()
         speak("Do you want to search in google for healthy life")
         text=Me_talk()
         if(text=='yes'):
            g.search_google_()#preferred to take any text
    elif(text=='send whatsapp message'):
         w.Whatsapp_open()
   # elif(text==''):##project:open GPS &tracker.......
    #    pass

######Automate my Terminal _simple Example about opening my system applications###    
     
def code_my_terminal(text):
    if(text=='sum function'):
        c_.code_sum()
    elif(text=='sub function'):
        c_.code_sub()      
    
 

##Start Conversation with Your Voice ASSistant
speak("Hello ..my nam is Roza")
text=Me_talk()
speak("How can i help you, do you want to open any web application")
text=Me_talk() #speak with one of these applications
My_command(text)  
speak("Do you want to write a code")
text=Me_talk()
if(text=='yes'):
  speak("do you want to write sum function")
  if(text=='yes'):
    code_my_terminal(text)
  elif(text=='no'):
      code_my_terminal(text)  

