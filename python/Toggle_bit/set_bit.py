 
def Set_Bit(n, k):
    return (n ^ (1 << (k-1)))

def Decimal_To_Binary(n):
    return bin(n).replace("0b", "")
   

if __name__ == '__main__':
    
     n=0b100000
     k = 1
     g=Set_Bit(n , k)
     print(Decimal_To_Binary(g))
     