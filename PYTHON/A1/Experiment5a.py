
























# l1 = [1,3,4,5,6]
# for x in l1 :
#     print(x,end=" ")

# l1 = [1,2,3,4,5]
# l2 = []
# for x in range(len(l1)) :
#     l2.append( l1[x]**2 )
# print(l1)
# print(l2)

# l1 =[]
# l2 =[]
# for i in range(1,101) :
#     if i%2 == 0 : l2.append(i)
#     else : l1.append(i)
# print(l1)
# print(l2)

# n = int(input("Enter no : "))
# for i in range(1,n+1):
#     print(i,end=" ")

# n = int(input("Enter no : "))
# for i in range(0,n):
#     print(n-i,end=" ")

# n = int(input("Enter no : "))
# for i in range(1,11) :
#     print(n*i,end=" ")

# n = int(input("Enter no : "))
# j1=1
# j2=1
# for i in range(1,n+1) :
#     if i <3 :
#         j=1
#         print(j,end=" ")
#     else :
#         j = j1+j2
#         print(j,end=" ")
#         j1=j2
#         j2=j
        
# n = int(input("Enter no : "))
# j0 =1
# z=1
# for i in range(n+1) :
#     if i==0 or i==1 :
#         j0=1
#     else :
#         z=i*z
# print(z)

# n = int(input("Enter no : "))
# for i in range(n+1) :
#     k=1
#     for j in range(i) :
#         print(k,end=" ")
#         k+=1
#     print()

# n = int(input("Enter no : "))
# for i in range(n+1) :
#     for j in range(i) :
#         print("*",end=" ")
#     print()

# l1 = [1,2,3,4,5]
# miter = iter(l1)
# print(next(miter))
# print(next(miter))
# print(next(miter))
# print(next(miter))
# print(next(miter))

# for i in range(0,7) :  
#     if i==3 :
#         continue
#     print(i,end=" ")

# num1 = int(input("Enter no. : "))
# num2 = int(input("Enter no. : "))
# if num1<num2 : i = num1
# else : i=num2
# print("Common factors : ")
# for x in range(1,i+1) :
#     if num1%x==0 and num2%x==0 :
#         print(x,end=" ")


num1 = int(input("Enter no. : "))
num2 = int(input("Enter no. : "))
if num1<num2 : j = num2
else : j=num1

for i in range(j,999) :
    if i%num1==0 and i%num2==0 :
        print(i)
        break
     
