


## LECTURE 3.6 & 3.7
for i in range(9,0,-2):
    print(1,2,3,sep='/',end='\t')
    print(f"{'hi'*2 == f'{4*i}'}", end='\t')
    print("%d*%d=%d"%(i,i*i,i/i), end='\t')
    print('PI = {0:.5f}'.format(22/7))
    print('{0:100d}'.format(1))

## Tutorial
ognum=int(input())
revnum=0
while ognum!=0:
    revnum+=ognum%10
    revnum*=10
    ognum=ognum//10
print(revnum//10)

count=0
num=int(input())
while num!=0:
    num=num//10
    count+=1
print(count)


### LECTURE 3.2
# Factorial
n=int(input())
fac=1
while n>1:
    fac*=n
    n-=1
print(fac)