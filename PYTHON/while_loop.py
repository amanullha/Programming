
'''
#while condition:

i=1

while i<100:
	if i%2!=0:
		print(i)

	i=i+1

# for loop
data = [3,5,6,7,8,9]

for i in data:
	print(i%2)

'''
'''
# functoin
# def fun_name ():

def fun(m,n):
	print (" we are from function\n")
	s=1
	while n!=0:
		s*=m
		n-=1;
		print(s)
	

 


fun(4,2)

'''



astr = 'Hello Bob'
istr = 0
try:
    istr = int(astr)
except:
    istr = -1

print(istr)