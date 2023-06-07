# for i in range(6):
#     print(i)
# else: #the working of for will finish then else statement will print
#     print("sorry")
#     print("hello")
# print("love")


for i in range(6):
    print(i) 
    if i==4:
        continue
    print("hello")
else:
    print("sorry")  #it will not print because we are using break as we reach to 4 with the help of break we come out of the while loop as else inside while so it will not execute
 


