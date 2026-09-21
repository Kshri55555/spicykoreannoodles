a=int(input("Enter the number a:"))
b=int(input("Enter the number b:"))
c=int(input("Enter the number c:"))
if a>b and a>c:
    print("largest number is",a)
elif b>a and b>c:
    print("largest number is",b)
else:
    print("largest number is",c)