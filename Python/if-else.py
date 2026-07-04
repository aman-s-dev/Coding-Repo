### LECTURE 2.8

# BEST WAY TO ASSIGN GRADES
marks=int(input())
if 0<=marks<=100:
    if marks>=90:
        print("A")
    elif marks>=80:  # instead of using 'and' on "<90 & >=80" ...as it is obv that this line will be executed only if marks is already <90
        print("B")
    elif marks>=70:
        print("C")
    # And so on
else:
    print("invalid value")

