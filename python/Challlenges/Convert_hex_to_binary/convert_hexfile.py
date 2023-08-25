from binascii import hexlify
import math
with open('oled_hex.hex', 'rb') as f:
    content = f.readlines()

with open('oled_bin.txt','w') as b:   
    for line in content :
     hex_to_integer_=int(line,16)
     integer_to_binary_=bin(hex_to_integer_)
     integer_to_binary_=integer_to_binary_[2:]
     b.writelines(integer_to_binary_)   
    print(integer_to_binary_)

    
    