dictionaryExample={
					"name":"aman",
					"id": "12345",
					"year" : "4yr"
				  }

#for x in dictionaryExample:

	#print(x,"  :  ",dictionaryExample.get(x))

#for x,y in dictionaryExample.items():
#	print(x,"  : ",y)

del dictionaryExample["name"]
for x,y in dictionaryExample.items():
	print(x,"  : ",y)