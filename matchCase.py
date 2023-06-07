x=int(input("Enter the Number: "))  #it will give sting so we are converting string to number
match x:
    case 0:
      print("x is zero: ")
    case 4:
     print("case is 4")
    case _ if x!=90:
      print(x,"is not 90")
    case y:    #default case is handled by underscore _ or anything
      print("This is default case")

#Note in python there is no need of break case



