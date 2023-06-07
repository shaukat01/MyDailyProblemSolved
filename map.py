def cube(x):
    return x*x*x
l=[2,5,4,6,7,8,9]
newl=tuple(map(cube,l))
# or
# newl=tuple(map(lambda x:x*x*x,l))
print(newl)


# numbers = ["3","34","64"]
# numbers = list(map(int,numbers))
# #or
# for i in range(len(numbers)):
#  numbers[i]=int(numbers[i])

# numbers[2]=numbers[2]+1
# print(numbers[2])    


 
#Now
# def sq(a):
#     return a*a
# num=[2,3,4,6,2,3,5]
# square=list(map(sq,num))
# print(square)
# #or
# num=[2,3,4,6,2,3,5]
# square=list(map(lambda x:x*x,num))
# print(square)






