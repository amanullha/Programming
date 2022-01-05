'''
a=11
b=33
print(a,"+",b," = ",a+b,end=" ")
print(f"{a}+{b}={a+b}")
'''
'''
subject=["am","2","43","3","3"]

#print(244 in subject)
subject=subject+["ullha","3"]
print(subject)
print(len(subject))
subject.append("last")
print(subject)

subject.insert(2,"amanullha")
print(subject )
subject.remove("amanullha")
print(subject)
subject.sort()
print(subject)
subject.reverse();

print(subject)
subject.pop()
print(subject)

subject2=subject.copy()

print(subject2)
print ("3" in subject)
val=subject.index("3")
print(val)
coun=subject.count("3")
print(coun)
'''
'''num=list(range(5,101,5))

i=0
while i<=len(num):

	print (num[i])
	i+=1
for i in num:
	print(i,end=" ")


n=input("Enter value of N: ")
sum=0;
# 1+2+3+...+N

"""for i in range(1,int(n)+1,1):
	sum+=i;
	#print(sum)
print("Final sum is : ",sum)"""'''

"""sum=1.0
n=int(input("Enter value of N "))


for x in range(2,n+1,1):

	sum+=(1.0/x)
	#print(sum)

print("final sum is ",sum)

"""

'''
t=int(input())

while t>0:
	n=int(input())
	ans=(n*(n-1))/2
	print(int(ans))
	t-=1
'''
'''n=int(input())

for i in range(n+1):
	print(i*"*")'''

import random

while(True):


		guessnum=int(input("Enter your guessing number between 1 to 5 "))

		randnum=random.randint(1,5)
		if guessnum==0:
			exit()

		if guessnum==randnum:
			print("milse")
		else:
			print("milse nah \n guess num: ",guessnum,"  randnum ",randnum)
