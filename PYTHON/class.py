class User:
    name=''
    email=''
    password=''
    login=False


    def login(self):
        email=input("Enter email : ")
        password=input("Enter password : ")

        if email==self.email and password==self.password:
            self.login=True;
            print("Login Successfull!")
        else:
            print("Login Faild!")


    def logout(self):
        if self.isLoggedIN():
            self.login=False
            print("Logged out!")


    def isLoggedIN(self):
        if self.login==True:
            return True;
        else :
            return False


    def profile(self):
        if self.isLoggedIN():
            print(" Profile Name: ",self.name,"\n","Profile Email: ",self.email)
        else:
            print("user is not logged In!!")



user1=User();
user1.name="aman"
user1.email="aman@gmail.com"
user1.password="12345"

user1.login()
user1.profile()
user1.logout()
hello=input()
