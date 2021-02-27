from cs50 import get_string
import sys

if len(sys.argv)!=2 :
    print("usage: ./caesar n")
    sys.exit(1)

n=int(sys.argv[1])
plaintext=get_string("plaintext: ")

print("ciphertext: ",end="")

for i in plaintext:
    if not i.isalpha():
        print(i,end="")
        continue

    if i.isupper():
        m=65 #big
    else:
        m=97 #small

    x=ord(i)-m #a->97
    y=(x+n)%26

    print(chr(y+m),end="") #97->a

print()
