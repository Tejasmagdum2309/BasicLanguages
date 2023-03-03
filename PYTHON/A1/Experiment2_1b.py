#Q6 
print("Q6 :")
List1 = [20,30,10,40,50,50]
print(List1)
List1.sort()
print(List1)

#Q7
print("\nQ7 :")
l = [1,2,3,4,5]
a=l[0]
n=l.__len__()
for x in range(n-1):
    a=a+l[x+1]
print(a)

#Q8
print("\nQ8 :")
List2 = ['Apple','banana','orange','mango','apple']
m=len(List2)
List2.pop(m-1)
print(List2)

#Q9
print("\nQ9 :")
List3 = [10.5,20,'cherry','papaya',30,30.3]
List3.reverse()
print(List3)

#Q10
print("\nQ10 :")
List1 = [20,30,10,40,50,50]
print(List1.count(50))

#Q11
print("\nQ11 :")
p=0
for x in range(len(List1)):
    p = p + List1[x]
print(p)    
  #or
print(sum(List1))

#Q12
print("\nQ12 :")
List3 = [10.5,20,'cherry','papaya',30,30.3]
l3 = List3
print(l3)

#Q13
print("\nQ13 :")
List1 = [20,30,10,40,50,50]
List1[2] = 70
List1[3] = 80
print(List1)

#Q14
print("\nQ14 :")
List1 = [20,30,10,40,50,50]
for x in range(len(List1)):
    if List1[x] == 20 :
        List1[x] = 90
print(List1) 

#Q15
print("\nQ15 :")
l12 = List1 + List2
print(l12)

#Q16
print("\nQ16 :")
List2 = ['Apple','banana','orange','mango','apple']
List2.clear()
print(List2)

#Q17
print("\nQ17 :")
List3 = [10.5,20,'cherry','papaya',30,30.3]
del(List3)
# print(List3[2])  ---->> List3 no more its deleted

#Q18
print("\nQ18 :")
Data1 = [34,45,67,23,65]
Date2 = ['abc','xyz','pqr','def']
data12 = Data1 , Date2    #------>> to create nasted list
data15 = Data1 + Date2    #------>> to add to list in one
print(data12)

l1 = [1,2,3,4]
l2 = [9,6,5]
l3 = [l1 ,l2]
print(l3)
print(l3[0][0])

print(l3[1][0])



