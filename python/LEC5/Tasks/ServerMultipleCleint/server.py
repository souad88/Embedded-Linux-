import socket
import threading
#port number
PORT =5050
#Every single message size is 64 ->can be changed
msg_size=64
disconnect_msg='Disconnect the connection....'
format_= 'utf-8' 
#get dynamic-> IP Address of me
#print(socket.gethostname()) #Will print your server name
SERVER= socket.gethostbyname(socket.gethostname())
#bind a socket to aspecific ADDRess
ADDR=(SERVER,PORT)
#Choose type of Services from:Services family
server=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#Server wait for connection through port
server.bind(ADDR)

def new_client( client_conect,client_addr):
    #starting new connection with client ...
    print(f"[A New Client -> ] {client_addr} connected Now :")
    connected=True
    #Receive message from Client while there is a connection
    while connected:
        msg_=client_conect.recv(msg_size).decode(format_)
        msg_=int(msg_)
        msg=client_conect.recv(msg_).decode(format_)
        if msg== disconnect_msg:
                   connected=False
        print(f"[{client_addr}] {msg}")
    client_conect.close()
    print(f"[Connection with {client_addr} is closed]")
def start_connection():
    #start listening utill new connection
    server.listen()
    print(f"[Server Is listining on {SERVER}..............]")
    
    while True:
        #server accept connection&save client address in addr
        #accept information from client ,save in conn
        client_conect,client_addr=server.accept()
        #add new connection to the listener list
        
        #Start a NEW_Thread if there is a NEW_client
        #Excute NEW_Client() FUNC, when Starting New thread
        thread=threading.Thread(target=new_client,args=( client_conect,client_addr))
        #Recursive Function ->still in Connection while the client is exist
        
        thread.start() 
        #count Number of Opened Threads (num of clients listening on the SERVER port)
        print(f"[ACTIVE CONNECTIONS] {threading.active_count()-1}")
        
      
      
print(f"SERVER IS STARTING ........")
start_connection()       