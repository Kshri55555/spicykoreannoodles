n=int(input("Enter the number of elements:"))
a=[]
for i in range(n):
    val=int(input("Enter the elements:"))
    a.append(val)
print(a)
val=int(input("Enter the element to be deleted:"))
a.remove(val)
print(a)