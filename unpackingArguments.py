def show(a,b,c,d):
    print("The a is: ",a)
    print("The b is: ",b)
    print("The c is: ",c)
    print("The d is: ",d)

lst=[2,3,4,5]
# show(lst)   #if we pass through it means the 2,3,4,5 all are passed in only one vribable that is a b,c and are empty
show(*lst) #through this way 2,3,4,5 all are goes their respective a,b,c and d 