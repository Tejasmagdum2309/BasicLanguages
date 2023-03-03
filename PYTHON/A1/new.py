n = 3
for i in range(n) :
    for j in range(n-i+1) :
        print(" ",end="") 
    for k in range(i+1):
        print("*",end=" ")
    print()
x = 0
for x in range(n-x+1):
    for j in range(x+1):
        print(" ",end="")
    for k in range(n-x+1):
        print("*",end=" ")
    print()





