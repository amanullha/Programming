

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
        email=input("Enter email : ")
        password=input("Enter password : ")

        if email==self.email and password==self.password:
            self.login=True;
            print("Login successful")
        else :
            print("Login Faild\n")


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
            print("User is not login\ncreate new account and login again!")


cholbe=True
while cholbe==True:

  print("\nLogin -> in    Register -> re   Exit -> ex\n")
  dis=input("Enter decision : ");

  if dis=="ex":
    break

  if dis=="in":
    user1=User("aman","ok@gmail.com","123")
    user1.Login();
    user1.profile();
    if user1.login==True:
      user1.logout();

  else:
    n=input("Enter name for Register :  ")
    e=input("Enter email for Register : ")
    p=input("Enter password for Register : ")

    newaccout=User(n,e,p);
    print("Registered successfully!!\nYou can login now")

    newaccout.Login()
    newaccout.profile()
    if newaccout.login==True:
      newaccout.logout();


print("\n\nGood bay programmer...!\n")
