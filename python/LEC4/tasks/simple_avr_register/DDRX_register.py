def DDRX(Port):
    DDRX_=[0,'b']
    if(Port=='PortA'):
        DDRA=[0,0,0,0,0,0,0,0]
        print("Enter Directions of DDRA Register[input/output]")
        for i in range(8):
           print('Pin',+i)
           c=input()
           if(c=='output'):
              DDRA[i]=1
    DDRA=DDRX_+DDRA
    for bin in DDRA:
     print(bin,end="")          
    #return DDRA    
        
 


      