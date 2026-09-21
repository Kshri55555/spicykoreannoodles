n=int(input("Enter the number of elements:"))
a=[]
for i in range(n):
    x=int(input("Enter the element:"))
    a.append(x)
print("List elements are:",a)
x=int(input("Enter the element to delete:"))
#pos=int(input("Enter index position:"))
a.remove(x)
print("List after deletion:",a)