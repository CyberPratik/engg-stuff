import math
n=int(input("Enter how many terms: "))
fibonacci=[0,1]
a,b=0,1
for i in range(0,n-2):
    c=b+a
    a=b
    b=c
    fibonacci.append(c)
if n==1:
    print(fibonacci[0])
else:
    print(fibonacci)
