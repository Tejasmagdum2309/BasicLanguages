#Q1
# print("Q1 : ")
from operator import contains
from random import sample
from unicodedata import name


Student = {
        'roll_no' : 2,
        'age' : [17],
        'contact' : [123423455567]
          }

#Q2
# print("\nQ2 : ")
stud = {
  'roll_no' : [4,7],
  'name' : ['Tejas','Naman']
}

#Q3
# print("\nQ3 : ")
Sample = {}

#Q4
print("\nQ4 : ")
t1 = (1,2,3,5)
Sample[t1] = {'what' : 'nani'}
print([Sample])
print(Sample[t1]['what'])

#Q5
# print("\nQ5 : ")
##print(Student['name']) ---->Show error as no key 'name' present in Student dictionary
# print(Student.get('name')) #-->not show error better then print(Student['name'])

#Q6
print("\nQ6 : ")
Student['age'] = 30
print(Student)

#Q7
print("\nQ7 : ")
print(len(stud))

#Q8
print("\nQ8 : ")
print(stud)
print(type(stud))
s=str(stud)
print(s)
print(type(s))

#Q9 n Q10
print("\nQ9 n Q10 : ")
print(Student.keys())
print(stud.values())

#Q11
# print("\nQ11 : ")
sample = {}
sample.update(stud)

#Q12
print("\nQ12 : ")
print(stud['name'])
print(stud.get('name'))

#Q13
# print("\nQ13 : ")
stud.update(contact = 1234567890)

#Q14
print("\nQ14 : ")
t2 = (1,2,3,4)
dict = dict.fromkeys(t2,10)
print(dict)

#Q15
# print("\nQ15 : ")
# l1 = [1,23]
# dict1 = {}
# dict1[l1] = 12     ----->> we cannot use mutable data tyoes as KEY
# print(dict1)

#16
print("\nQ16 :")
d = {
  't1' : (1,23,4),
  'l1' : [2,45,6]
}
print(d['l1'])
print(d['t1'])











