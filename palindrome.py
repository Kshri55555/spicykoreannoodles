s=int(input("Enter the Number to be checked:"))
original=s
reverse=0
while s>0:
    remainder=s%10
    reverse=reverse*10+remainder
    s=s//10
if reverse==original:
    print("The given number is a palindrome Number")
else:
    print("The given number is not a palindrome Number")