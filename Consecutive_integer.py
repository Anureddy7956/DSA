#Consecutive integer checking algorithm for computing gcd(m, n)
m=int(input("Enter the m:"))
n=int(input("Enter the n:"))
t=min(m,n)
while True:
    
    if n%t==0:
        if m%t==0:
            print(f"The greatest comman diviser of m and n is:{t}")
            break
    t=t-1