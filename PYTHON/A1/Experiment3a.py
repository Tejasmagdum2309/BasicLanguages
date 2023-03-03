#Q1 
# print("Q1 :")
set1 = {'physics','chemistry','maths'}
set2 = {'physics','chemistry','computer_science','electronics'}

#Q2 n Q3
# print("\nQ2 n Q3 :")
set1.add('biology')
set2.add('aero')
set2.add('IT')

#Q4
print("\nQ4 :")
print(set1.union(set2))
print(set1.intersection(set2))
print(set1.difference(set2))

#Q5
print("\nQ5 :")
s1 = {'physics','chemistry','maths'}
s2 = {'physics','chemistry','computer_science','electronics','maths'}
print(s1<s2)
print(s1>s2)
print(s1==s2)

#Q6 n Q7 n Q8 n Q9 
# print("\nQ6,7,8,9 :")
set1.remove('maths')
set1.pop()
set1.clear()
del(set1)

#Q10
# print("\nQ10 : ")
# ss = set()   ----> We cannot add mutable data type in sets unhassable type
# ss.add([1,2,4,5])

#Q11
# print("\nQ11 :")
set3 = set()

#Q12
print("\nQ12 :")
dictionary = {
    'Naman' : 1,
    'harsh' : 2
}
fset = frozenset(dictionary)
print(fset)




