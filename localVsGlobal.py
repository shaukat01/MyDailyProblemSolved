# x=4
# print(x)


# def hello():
#     x=7
#     y=9
#     print(x)
#     print(y)
#     print("Hello")


# print(x)
# # # print(y)  #it will give error because y is local variable of function hello
# print("Again hello")
# hello()
# print(x)



def hello():
    global x   #it makes the 7 globally everywhere after the fuction call
    global y  #always write this above of variable declare
    y=9
    x=7
    print(x)
    print(y)
    print("Hello")

x=4
print(x)
print(x)
print("Again hello")
hello()
print("Printing after function call")
print(x)  #print 7
print(y)  #we can access y as we write global y it makes y as globally






