
print("Enter '1' for '+': ")
print("Enter '2' for '-': ")
print("Enter '3' for '*': ")
print("Enter '4' for '/': ")
n=int(input("Choose one of the above operator: "))
x=int(input("Enter first number: "))
y=int(input("Enter 2nd number: "))
if n==1:
    print(x," +", y,"="," ",x+y)
elif n==2:
    print(x," -", y,"="," ",x-y)
elif n==3:
    print(x," *", y,"="," ",x*y)
elif n==4:
    print(x," /", y,"="," ",x/y)
else:
    print("Invalid input")

