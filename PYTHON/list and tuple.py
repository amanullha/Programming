# list can be moidfided but tuple can't be moidfided
#list dicleared with 3rd bracket
#in the list we can store different different types of data
# and also we and store a list in a item of a list, actually it's call multidimentional list

#list=[1,2,3,4,5,6,7,8,9,10]
#truple dicleared with 1st bracket
#truple=(11,22,33,44,55,66,77,88,99)
##truple[0]=12111
#print(list[0])
#print(truple[0])
#nested of multidimentional list
#list=[[1,2,3],44,55,66]
#print(list[0][1])
#list manupulation
# first of all add data in the list
#append () function dia data add kora lage. append list ar last a data ta add korbe
# insert() function dia of data insert kora hoy , tob akane "list.insert(address,data)" akta
# fixed address a data insert kora jabe
#list=[11,22,33,44,55,66]
#list.append(77)
#list.insert(2,77)
#print(list)
# 2 ta list ke combination
# extend() function ta akta list ke peramiter hisabe nibe nia last or fixed address a store kora jabe
#list=[11,22,33,44,55,66]
#print(list)
#list.extend([99,88,77])
#list.insert(2,list)
#list=list+[99,88,77]
# remove() function dia item remove kora hoy

#list=[11,22,33,44,55,66]
#print(list)
#list.remove(33)# aii item ta khoje ber kore remove korbe
#print(list)
#list.remove(list[3])# aii address ar item ta remove korbe
#print(list)
#sort() for ascending order sort for intejer vlue
# but strign ar somoy alphabetically sort korbe
#list=[66,22,33,44,55,11]
#list=[u,s,a,p]
#print(list)
#list.sort();
#print(list)
#index() function dia amra item ar index ber korte parbo
list=[66,22,33,44,55,11,11,11]
print(list.index(22))
#count() function dia list ar moddhe akya item kotho bar ache shi bar shonkha ber kora jabe
print(list.count(11))
