# class programmer :
#     place = "Microsoft"
#     name='x'
#     salary = 1
#     # id = 11111
#     def __init__(self):
#           print(f"The working PLACE : {self.place}")

#     def getinfo(self):
#         self.name = input("Enter name : ")
#         self.salary = int(input("Enter Salary : "))
    
#     def show(self):
#         print(f"{self.name}\t")
#         print(f"{self.salary}")

# tejas = programmer()
# tejas.getinfo()
# tejas.show()

class calculator :
    
    def __init__(self,a):
         self.a = a
        
    def square(self):
        return self.a**2
    # @staticmethod
    def greet():
        print("HEllo i loue you but as a friend")

a = (int)(input("Enter a : "))
new = calculator(a)
new.greet()
print(new.square())

