mydict1={}
print("Enter elements of first dict")
while True:
    key=input("Enter a key(or 'q' to quit):")
    if key=='q':
        break
    value=int(input("Enter a value:"))
    mydict1[key]=value
print("Enter elements of second dict")
mydict2={}
while True:
    key=input("Enter a key(or 'q' to quit):")
    if key=='q':
        break
    value=int(input("Enter a value:"))
    mydict2[key]=value
print(mydict1|mydict2)
