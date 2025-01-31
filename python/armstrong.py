n = int(input("Enter any no: "))
sum = 0
temp = n
while temp > 0:
    digit = temp % 10  # 3   5
    sum = sum + (digit ** 3)  # 0+27=27  125
    temp //= 10  # n=15
print(sum)
if n == sum:
    print("It is Armstrong no.")
else:
    print("It is not an Armstrong no.")
