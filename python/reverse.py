n=int(input("Enter any number: "))
temp=n
rev=0
while temp>0:
    digit=temp%10
    rev=rev*10+digit
    temp//=10
print("Reverse of the given number is: ",rev)