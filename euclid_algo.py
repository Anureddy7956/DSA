# my own gcd algorithm
m=int(input("enter the m: "))
n=int(input("enter the n: "))
list_m=[]
list_n=[]
for i in range(1,m+1):
    if m%i==0:
        list_m.append(i)

for j in range(1,n+1):       
    if n%j==0:
        list_n.append(j)
        
print(f"m list numbers {list_m}")
print(f"n list numbers {list_n}")

set(list_m)
set(list_n)
comman_elements=list(set(list_m) & set(list_n))# & is the set instruction it finds the common elements in the set
print(f"The common elements in the list is {comman_elements}")
res=1
for num in comman_elements:
    res*= num
print("GCD",res) 
