n=int(input("Enter the numberof elements:"))
a=[]
for i in range(n):
    x=int(input("Enter the elements:"))
    a.append(x)
a.sort()
print("Sorted list:",a)
key=int(input("Enter the element to search:"))
low=0
high=n-1
found=False
while low<=high:
    mid=(low+high)//2
    if a[mid]==key:
        print("Element found at index:",mid)
        found=True
        break
    elif key>a[mid]:
        low=mid+1
    else:
        high=mid-1
if found == False:
    print("Element")