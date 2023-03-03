


















# a = input("Enter a  : ")
# b = input("Enter b : ")
# if a<b :
#     print("greater no. :",b)
#     print("smaller no. :",a)
# else :
#     print("Both are same")


# length = input("Length of rectangle : ")
# breadth = input("Breadtgh of rectangle :")
# l = int(length)
# b= int(breadth)
# if l == b :
#     print("Its square")
#     print("Area is : ",l*b)
# else :
#     print("Its not square")    


# age1,age2,age3 = input("enter ages of 3 people : ").split()
# age1 = int(age1)
# age2 = int(age2)
# age3 = int(age3)
# def smallest(n1,n2,n3) :
#     if n1<n2 and n1<n3 :
#          print("smallest : " ,n1)
#     elif n2<n1 and n2<n3 :
#          print("smallest : ",n2)
#     else :
#         print("Smallest : ",n3)
# def biggest(n1,n2,n3):
#     if n1>n2 and n1>n3 :
#          print("greater : " ,n1)
#     elif n2>n1 and n2>n3 :
#          print("greater : ",n2)
#     else :
#         print("greatest : ",n3)   

# print(smallest(age1,age2,age3))
# print(biggest(age1,age2,age3))

# list1 = [10,20,30,40,50]
# if 20 in list1:
#     a= list1.index(20)
#     list1[a] = 60 
    
# t1 = ('name','age','addres')
# student = {}
# student=student.fromkeys(t1,10)
# student['name']   = input("Enter Name : ")
# student['age']    = int(input("Enter age : "))
# student['addres'] = input("Enter addres : ")

# if student['age']>=18 : print("welcome")  
# else:print("invalid")
    
# salary = int(input("Enter Salary : "))
# year = int(input("Enter year u work in this company :"))
# if year<0 :
#     print("Invalid year")
#     year = int(input(" 2 : Enter year u work in this company :"))   
# elif year>=0 and year<5 :  print("Yoyr Salary is : ",salary)
# else                    :  print("Salary  + 10%(of salary) : ",(salary)+(salary/10))    



# def percentage (marks) :
#  if 0<marks<25 : print('F')
#  elif 25<=marks<45 :print("E")
#  elif 45<=marks<50 :print("D")
#  elif 50<=marks<60 :print("C")
#  elif 60<=marks<80 :print("B")
#  elif 80<=marks<=100 :print("A")
#  else :
#     marks = int(input("Invalid marks given enter again : ")) 
#     percentage(marks)
# marks = int(input("Enter marks : "))
# percentage(marks)

# no_of_class = int(input("No. of classes held : "))
# no_of_class_attend = int(input("no. of classes attended : "))
# per_of_class_attend = float(no_of_class_attend/no_of_class)
# if per_of_class_attend>0.75 :
#     print("Yoc can qualify for exam with attendance ",int(per_of_class_attend*100)," percent")
# else :
#     print("Not allowed for Exam")
 
# year = int(input("Enter Year : "))
# if year%400 == 0 :
#     print("Leap Year")
# else :
#     print("not leap year")

a= 12
b=123
if a<b : print("a")
print("a equal b") if a==b else print("not equal")