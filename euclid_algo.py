#Euclid's algorithm
#gcd of(m,n)

m=int(input("Enter the m:"))
n=int(input("Enter the n:"))
if n==0:
    print(f"The greatest comman diviser of m and n is:{m}")
else:
    while n!=0:
        r=m%n
        m=n
        n=r
    print(f" greatest comman divisor of m and n is:{m}")
    
