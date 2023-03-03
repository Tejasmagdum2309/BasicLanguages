# q1
# f = open("poem.txt","r")
# text = f.read()
# print(text)

# if text.find("wei")>0 :
#     print("Yes its present")
# else :
#     print("Not present")

#q2
# def game(n):
#      f=open("hiscore.txt","r")
#      t=f.read()

#      if int(n)>int(t) :
#         f = open("hischore.txt","w")
        
#         f.write(n)
                                                                                        
#      else :
#         print("Your score : ",n)                                                              

# game(56)         
#                                                      
# q3
# for i in range(2,21):
#    with open(f"A2/mul_table_{i}.txt","w") as f :
#       for j in range(1,11) :
#          f.write(f"{i}*{j}={i*j}")
#          if j!=10 :
#             f.write("\n")  
l = ["saili","mc","bc","chutiya"]
with open("s.txt") as f :
   s=f.read()
   # while(s.find("saili")!= -1):
   for w in l :
      s=s.replace(w,"#####")
      with open("s.txt","w") as f1 :
        f1.write(s)

# with open("s.txt") as f :
#    s=f.read()
# if "tejas" in s.lower() :
#     for 
# else :print("not Present")
