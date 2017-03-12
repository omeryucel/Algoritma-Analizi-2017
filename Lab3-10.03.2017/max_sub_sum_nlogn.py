from random import randint
from datetime import datetime

def find_max_triple(a,b,c):
    if a>b:
        if b>c:
            return a
        elif a>c:
            return a
        else:
            return c
    elif b>c:
        return b
    else:
        return c
       
def find_middle(list=[-3, 5, -2, -1, 2]):
    middle=int(len(list)/2)  
    
    sum_left_max=0
    sum_left=0
    for i in range(middle-1,-1,-1):  
        sum_left=sum_left+list[i]
        if sum_left>sum_left_max:
            sum_left_max=sum_left
  
    sum_right_max=0
    sum_right=0
    for i in range(middle,len(list)):  
        sum_right=sum_right+list[i]
        if sum_right>sum_right_max:
            sum_right_max=sum_right
    
    return sum_left_max+sum_right_max

def max_sub_sum_array(array):
    if(len(array)<2):
        return sum(array)
    else:
        middle=int(len(array)/2)
        sum_left=max_sub_sum_array(array[0:middle-1])  
        sum_right=max_sub_sum_array(array[middle:])    
        sum_middle=find_middle(array)
    return find_max_triple(sum_left,sum_right,sum_middle)

print("\n-- nlogn --")

#N=1000
myarray=[]
for i in range(0,1000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
print("\nSub Sum: ",max_sub_sum_array(myarray))
end=datetime.now()
delta=end - start
print("n=1000 => ", end='')
print("Time :",delta.total_seconds(), "Seconds\n")  

#N=2000
myarray=[]
for i in range(0,2000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
print("\nSub Sum: ",max_sub_sum_array(myarray))
end=datetime.now()
delta=end - start
print("n=2000 => ", end='')
print("Time :",delta.total_seconds(), "Seconds\n")

#N=4000
myarray=[]
for i in range(0,4000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
print("\nSub Sum: ",max_sub_sum_array(myarray))
end=datetime.now()
delta=end - start
print("n=4000 => ", end='')
print("Time :",delta.total_seconds(), "Seconds\n") 

#N=8000
myarray=[]
for i in range(0,8000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
print("\nSub Sum: ",max_sub_sum_array(myarray))
end=datetime.now()
delta=end - start
print("n=8000 => ", end='')
print("Time :",delta.total_seconds(), "Seconds\n")

#N=16000
myarray=[]
for i in range(0,16000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
print("\nSub Sum: ",max_sub_sum_array(myarray))
end=datetime.now()
delta=end - start
print("n=16000 => ", end='')
print("Time :",delta.total_seconds(), "Seconds\n")