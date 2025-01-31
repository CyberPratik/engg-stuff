import random
#mylist=['0','1','2','3','4','5','6','7','8','9']
mylist=['0','1','2','3']
z =random.choice(mylist)
x=int(input("Guess any no from 0-3: "))
if int(z)==x:
    print("The number is: ",z)
    print("Congratulations!! You Won!!")
else:
    print("The number is: ",z)
    print("You lost!!Better Luck Next Time!!")
