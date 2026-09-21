a=int(input("Enter the number to be checked:"))
count=0
for i in range(1,a+1):
    if a%1==0:
     count=count+1
if count==2:
    print("The given number is a prime number")
else:
    print("The given number is not a prime number")