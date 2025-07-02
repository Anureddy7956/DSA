# Sieve of Eratosthenes 
n=int(input("enter the range: "))
my_list1=[]
my_list2=[]
my_list3=[]
my_list4=[]
for i in range(1,n+1):
    if (i==2)or(i % 2 !=0):
        my_list1.append(i)
print(f"The first pass numbers divisible by 2:{my_list1}")

for num in my_list1:
    if (num==3)or(num%3!=0):
        my_list2.append(num)
print(f"The second pass numbers divided by 3:{my_list2}")

for num in my_list2:
    if(num==5)or(num%5!=0):
        my_list3.append(num)
print(f"The third pass numbers divided by 5:{my_list3}")

for num in my_list3:
    if(num==7)or(num%7!=0):
        my_list4.append(num)    
print(f"The third pass numbers divided by 7:{my_list4}")


