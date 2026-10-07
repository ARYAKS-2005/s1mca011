c=int(input("How many elements:"))
lst1=[]
for i in range(c):
    lst1.append(int(input("Enter the element:")))
for i in lst1:
    if(i%2==0):
        lst1.remove(i)
print(lst1)
