import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip=socket.gethostname(socket.gethostname())
print("your ip is :"+ip)
s.bind((ip,5000))
s.listen(5)
while True:
    client,address=s.accept()
    rodata=client.recv(1024)
    print(f"{address} is sending message {rodata.decode('UTF-8')}")
    msg=str(input("Enter message"))
    msg_encode=msg.encode('UTF-8')
    client.send(msg_encode)
    client.close()