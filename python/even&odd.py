i=int(input("Enter how many inputs: "))
n=[]
even=[]
odd=[]
for i in range(0,i):
    n=int(input("Enter the number: "))
    if n%2==0:
        even.append(n)
    else:
        odd.append(n)
print("even =",even)
print("odd =",odd)