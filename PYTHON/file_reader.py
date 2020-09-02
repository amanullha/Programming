#f=open('example.txt','r')

#print(f.read())
#print(f.readline())
#for x in f:
#	print(x)

import os
print("Do you want to creat a file? say y or n: ")
d=input()
if d=="y":
	print("Enter file name")
	name=input()
	file_name=name+".txt"
	f=open(file_name,"x")
	print("Your file created successfully..!\n")
	chole=True;
	while chole==True:
		print("What do you want..?\nWrite file press---> w\nFor read press---> r\nFor exit press---> anything\n")
		dis=input()
		if dis=="w":
			f=open(file_name,"a")
			print("overwrit your file...!\n")
			var=input()
			f.write(var)
			f.write(" ")
			f.close()
			

		elif dis=="r":
			f=open(file_name,"r")
			print(f.read(),"\n\n")
		else:
			os.remove(file_name)
			chole=False




else:
	exit()



