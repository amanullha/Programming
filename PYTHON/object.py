class User:
    name=''
    email=''
    password=''
    login=False

    def __init__(self,name,email,password):
        self.name=name
        self.email=email
        self.password=password

    def Login(self):
        email=input("Enter email")
        password=input("Enter password")

        if email==self.email and password==self.password:
            self.login=True;
            print("Login successful")
        else :
            print("Login Faild\ncreate new account and login again!")


    def logout(self):
        self.login=False
        print("loged out")

    def islogin(self):
        if self.login:
            return True
        else :
            return False

    def profile(self):
        if self.islogin():
            print(self.name,"\n",self.email)
        else:
            print("User is not login")



user1=User("aman","ok@gmail.com","123")

user1.Login();
user1.profile();
user1.logout();
