import socket
PORT =5050
msg_size=64 
SERVER='172.20.10.2'
disconnect_msg='Disconnect the connection....'
format_='utf-8'
ADDR=(SERVER,PORT)
client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client.connect(ADDR)

def send_message(msg):
    
    msg_r=msg.encode(format_)
    len_message =len(msg_r)
    send_length=str(len_message).encode(format_)
    send_length +=b' '*(msg_size-len(send_length))
    client.send(send_length)
    client.send(msg_r)
    
    print(client.recv(2048).decode(format_))



send_message("HI,I'm a new Client")   
cl_msg=input()
send_message(cl_msg)

send_message("HI,I'm a new client")
send_message("Hello fayrouz")
send_message(disconnect_msg)   
