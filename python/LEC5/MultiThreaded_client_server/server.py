import socket
from _thread import *
import threading
thread_lock_=threading.Lock()
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip= socket.gethostbyname(socket.gethostname())
def thread_(client_):
    while True:
        msg=client_.recv(1024)
        if not msg :
            print('disconnect')
            thread_lock_.release()
            break
        
        client_.send(msg)
    client_.close()

def Start_connection():
    host=""
    port=5050 
   
    s.bind((host,port))
    print("server binded to port &",port,ip)
    s.listen(5)
    print("server is lstining")
    while True:
        m,address=s.accept()
        thread_lock_.acquire()
        print('server connected to :',address[0],':',address[1])
        start_new_thread(thread_,(m,))
    
    
if __name__=='__main__':
        Start_connection()
           
            