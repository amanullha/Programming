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