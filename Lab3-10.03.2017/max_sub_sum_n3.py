from random import randint
from datetime import datetime

def max_sub_sum_array(myvector):
	maxSum=0
	for i in range((len(myvector))):
		for j in range(i,len(myvector)):
			thisSum=0
			for k in range (i,j):
				thisSum=thisSum+myvector[k]
				if (thisSum>maxSum):
					maxSum=thisSum
	return maxSum
	
	
myarray=[]
for i in range(0,1000):
	myarray.append(randint(-100,100))
	
start=datetime.now()
result=max_sub_sum_array(myarray)
end=datetime.now()
delta=end - start
 
print("\n-- n3 --\n")

print("n=1000 => ", end='')
print("Total Execution Time:",delta.total_seconds(),"Seconds\n")

print("n=2000 => ", end='')
print("Total Execution Time:",delta.total_seconds()*(2**3),"Seconds\n")

print("n=4000 => ", end='')
print("Total Execution Time:",delta.total_seconds()*(2**6),"Seconds\n")

print("n=8000 => ", end='')
print("Total Execution Time:",delta.total_seconds()*(2**9),"Seconds\n")

print("n=16000 => ", end='')
print("Total Execution Time:",delta.total_seconds()*(2**12),"Seconds\n")