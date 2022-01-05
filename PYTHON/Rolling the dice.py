#random() function use korte hole age random ke import korte hobe
#import random
#random." value type"("starting value"," ending value")mane kotho thake kotho porjonto rand value need
# suppose niche 1 thake 100 ar moddhe rand value ta hobe
#ai rand value ta amra 2 secomd por por o nite parbo
# tar jnno "time" ke import korte hobe
#then akta loop ar moddhe time.sleep("kotho second ar jnno sleep thakebe") ai mathod ta call kore 2 second por por akta kore rand value nite parbo
#
#import time
#for n in range(10):#range mane holo, n 1 thake kotho porjonto cholbe
#    time.sleep(.5)
#    randomval=random.randint(1,100)
#    print(randomval)
"""
import random

cholbe="yes"
while cholbe=="yes":
    print("Rolling the dise....")
    print("The value are.....")
    print(random.randint(1,100))
    print(random.randint(101,1000))
    print(random.randint(1001,10000))
    cholbe=input("cholbe...?")
"""
import random
import time

cholbe="yes"
while cholbe=="yes":
    
    print("Rolling the dise....")
    print("The value are.....")
    print(random.randint(1,100))
    time.sleep(1)
    print(random.randint(101,1000))
    time.sleep(1)
    print(random.randint(1001,10000))
    time.sleep(1)
    cholbe=input("cholbe...?")
