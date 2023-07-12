def mysum(x,y):
    return x+y
def myminus(x,y):
    return x-y
def mutliply(x,y):
    return x*y
def divide(x,y):
    return x/y
def reverse(x):
    rem=0
    rev=0
    while x>0:
        rem=x%10
        rev=(rev*10)+rem
        x=x//10
    return rev
               
def factorial(x):
    fact=1
    for x in range(1,x+1):
         fact=fact*x
    return fact
               
               
               
    

           
