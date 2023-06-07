# def funargs(*args):
#     print(type(args))
#     print(args)
#     print("/n")
#     print(args[0])

# har=["harry","Rohan","skillf","Hammad","shivam"]
# funargs(*har) #it will give answer as tuple


def funargs(normal,*args):
    print(type(args))
    print(normal,args)
    print("/n")
    print(normal,args[0])

har=["harry","Rohan","skillf","Hammad","shivam"]
normal=5
funargs(normal,*har) 