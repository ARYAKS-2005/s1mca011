import operator
mydict={}
while True:
    key=input("Enter a key(or 'q' to quit):")
    if key=='q':
        break
    value=int(input("Enter a value:"))
    mydict[key]=value
print("Original dictionary:",mydict)
sd=dict(sorted(mydict.items(),key=operator.itemgetter(1)))
print("Dictionary in ascending order by value:",sd)
sd=dict(sorted(mydict.items(),key=operator.itemgetter(1),reverse=True))
print("Dictionary in descending order by value:",sd)
