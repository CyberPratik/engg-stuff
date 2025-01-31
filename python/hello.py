salary=int(input("Enter salary of employee: "))
hra=0.10*salary
ta=0.05*salary
tax=0.02*salary
net_salary=salary-(hra+ta+tax)
print("Net_salary of the employee is: ",net_salary)