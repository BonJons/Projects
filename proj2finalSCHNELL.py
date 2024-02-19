#ackermann code
def ackermann(m, n):
        if m == 0:
            return n + 1
        elif n == 0:
            return ackermann(m - 1, 1)
        else:
            return ackermann(m - 1, ackermann(m, n - 1))
        
#powers with recurrsion
def powers(b,c):
    if c == 0:
        return 1
    elif c % 2 == 0:
        return powers(b * b, c / 2)
    else:
        return b * powers(b * b, (c - 1) / 2)
print("In this project we will use ackermann's function, at the prompts please enter two numbers")
m = int(input("What is m? "))
n = int(input("What is n? "))

print(ackermann(m, n))

Continue1 = input("Would you like to try two more numbers (Y or N)? ")
while Continue1 == "Y" or Continue1 == "y":
    m = int(input("What is m? "))
    n = int(input("What is n? "))
    print(ackermann(m, n))
    Continue1 = input("Would you like to try two more numbers (Y or N)? ")
else:
    print("Sounds good!")

#raising a number to a power
Continue2 = input("Would you like to continue to the powers part (Y or N)? ")
while Continue2 == "Y" or Continue2 == "y":
    b = int(input("Ok what is the number you would like to raise to a power? "))
    c = int(input("What power would you like to raise the number to? "))
    print(powers(b,c))
    Continue2 = input("Would you like to test it again (Y or N)? ")
else:
    print("Okay thank you for your time!")





