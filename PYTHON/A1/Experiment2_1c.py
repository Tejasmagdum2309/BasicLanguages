#Q1
print("Q1 :")
tuple1 = (1,2,3,4,5)
print(tuple1)

#Q2
print("\nQ2 :")
tuple2 = (2,2.3,'tejas')
print(tuple2)

#Q3
print("\nQ3 :")
tuple1 = (1,2,3,4,5)
print(tuple1[2])

#Q4
print("\nQ4 :")
t1 = (2,4,6,24,65,21)
print(t1[4])
print(t1[-4])

#Q5
print("\nQ5 :")

for x in range(len(t1)):
    if t1[x]==24 :
        a=1
        break

if a==1:
    print("no. is present") 
else :
    print("NO. not present")

#Q6
print("\nQ6 :")        
t3 = (1,)
print(t3)

#Q7
print("\nQ7 :") 
l1 = [1,4,6,7,8]
print(l1)
tt = tuple(l1)
print(tt)

#Q8
print("\nQ8 :") 
t5 = (2,4,5,7,7,9,0)
print(t5[2:6])

#Q9
print("\nQ9 :") 
t5 = (2,4,5,7,7,9,0)
print(t5.index(5))

#Q10
print("\nQ10 :") 
t5 = (2,4,5,7,7,9,0)
print(len(t5))


