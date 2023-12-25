def Decimal_To_Binary(n):
    return bin(n).replace("0b", "")
def Set_Bit(n, k):
    (n ^ (1 << (k)))
def DDRX(Port):
    DDRX_=0b00010000
    if(Port=='PortA'):
      
        print("Enter Directions of DDRA Register[input/output]")
        for i in range(8):
           print('Pin',+i)
           c=input()
           if(c=='output'):
               Set_Bit(DDRX_,i)
    print(Decimal_To_Binary(DDRX_))          
DDRX('PortA')