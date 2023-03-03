# class person :
#     salary =34
#     def intro(self):
#         print(f"I am ok {self.salary}")

# class prog(person):
#     pass

# p = prog()
# p.intro()

# class Empo:
#     salary = 1000
#     bonus = 200
#     @property
#     def totalSalary(self):
#         return self.bonus+self.salary
    
#     @totalSalary.setter
#     def totalSalary(self,val):
#         self.bonus = val - self.salary
    
#     @classmethod
#     def change(self):
#         self.salary = 500

    

# e = Empo()
# # print(e.totalSalary)
# # e.totalSalary = 1100
# # print(e.bonus)
# print(Empo.salary)
# e.change()
# print(e.salary)
# print(Empo.salary)

class Number :
    def __init__(self,num):
       
        self.num = num

    def __add__(self,c):
        print("Add : \t")
        return self.num + c.num

    def __str__(self):
        return f"{self.num}"
    
    def __len__(self):
        return 3

n1 = Number(454)
print(n1)
print(len(n1))
# n2 = Number(5)
# num = n1+n2
# print(num)