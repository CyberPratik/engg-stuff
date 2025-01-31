a=int(input("Enter marks obtained in 1st subject: "))
b=int(input("Enter marks obtained in 2nd subject: "))
c=int(input("Enter marks obtained in 3rd subject: "))
d=int(input("Enter marks obtained in 4th subject: "))
e=int(input("Enter marks obtained in 5th subject: "))
percentage=(a+b+c+d+e)/5
print("Percentage is: ",percentage)
if percentage>=75:
    print("Distinction")
elif percentage>=60 and percentage<75:
    print("First Division")
elif percentage>=50 and percentage<60:
    print("Second Division")
elif percentage>=40 and percentage<50:
    print("Third Division")
else:
    print("Fail")