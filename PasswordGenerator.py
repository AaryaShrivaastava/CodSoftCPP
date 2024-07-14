import random

lowercase = "abcdefghijklmnopqrstuvwxyz"
uppercase = lowercase.upper()
digits="0123456789"
symbols = "!@#$%&*():;?/_-=+"


upper,lower,digi,symbs = True, True, True, True

all=""
if upper:
    all += uppercase
if lower:
    all+=lowercase
if digi:
    all+=digits
if symbs:
    all+=symbols


length = int(input("\n\nEnter password length : "))

password="".join(random.sample(all, length))

print("\n\nPassword : ",password,"\n\n")