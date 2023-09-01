import socket

def start_connection():
    host='192.168.100.39'
    port=5050
    s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    s.connect((host,port))
    message="hello , iam a client"
    while True:
        s.send(message.encode('UTF-8'))
        data=s.recv(1024)
        print('recieved:',str(data.decode('UTF-8')))
        received=input()
        s.send(received.encode('UTF-8'))
        continue
                       
      
if __name__=='__main__':
    start_connection()    