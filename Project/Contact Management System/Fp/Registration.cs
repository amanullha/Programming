using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;
using System.IO;
//using System.Drawing.Imaging;
using System.Text.RegularExpressions;


namespace Fp
{
    public partial class Registration : Form
    {
        private string Gmail, Name, Phone, Password, MediaLink, Group, Address;
        OleDbConnection conn = new OleDbConnection();

       

        private void Backlogin_Click(object sender, EventArgs e)
        {
            Login obj = new Login();
            obj.Show();
            this.Hide();
        }

        public Registration()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void textBox7_MouseClick(object sender, MouseEventArgs e)
        {
            groupb.Text = "";
        }

        private void Registration_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            InstitutionGetInfo ob = new InstitutionGetInfo();
            ob.Show();
            this.Hide();
        }

        private void exit_Click(object sender, EventArgs e)
        {
            System.Environment.Exit(0);
        }

        private void groupb_TextChanged(object sender, MouseEventArgs e)
        {
            groupb.Text = "";
        }


        public void boxfill()
        {
            Gmail = gmailb.Text;
            Name = nameb.Text;
            Phone = phoneb.Text;
            Password = passwordb.Text;
            MediaLink = medialinkb.Text;
            Group = groupb.Text;
            Address = addressb.Text;
        }

        void clr()
        {
            gmailb.Clear();
            nameb.Clear();
            phoneb.Clear();
            passwordb.Clear();
            cpasswordb.Clear();
            medialinkb.Clear();
            groupb.Clear();addressb.Clear();
           
        }


        public const string MatchEmailPattern =

@"^[\w!#$%&'*+\-/=?\^_`{|}~]+(\.[\w!#$%&'*+\-/=?\^_`{|}~]+)*"

+ "@"

+ @"((([\-\w]+\.)+[a-zA-Z]{2,4})|(([0-9]{1,3}\.){3}[0-9]{1,3}))\z";

        public static bool IsEmail(string email)

        {

            if (email != null) return Regex.IsMatch(email, MatchEmailPattern);

            else return false;

        }



        private void Sign_up_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            boxfill();
            if(gmailb.Text.Length==0 || nameb.Text.Length==0 || passwordb.Text.Length==0 || cpasswordb.Text.Length==0)
            {
                mgs.Text = "Name, Gmail and Password are MANDATORY";
                return;
            }
            if(cpasswordb.Text!=passwordb.Text)
            {
                mgs.Text = "Please Check Password";
                return;
            }
            if (IsEmail(gmailb.Text)==false)
            {
                mgs.Text = "Please Enter a Valid Gmail";
                return;
            }



            /* try
             {



                 MemoryStream ms = new MemoryStream();
                 pictureBox1.Image.Save(ms,System.Drawing.Imaging.ImageFormat.Jpeg);
                 byte[] photo = new byte[ms.Length];

                 ms.Position = 0;
                 ms.Read(photo, 0, photo.Length);

                 OleDbCommand cmd = new OleDbCommand("insert into UserTable(Gmail,Name,Phone,Upossword,MediaLink,Ugroup,Address,Image) values('" + Gmail + "','" + Name + "','" + Phone + "','" + Password + "','" + MediaLink + "','" + Group + "','" + Address + "',@photo)", conn);
                // OleDbCommand cmd = new OleDbCommand("insert into UserTable(Gmail,Name,Phone,Upossword,MediaLink,Ugroup,Address) values('" + Gmail + "','" + Name + "','" + Phone + "','" + Password + "','" + MediaLink + "','" + Group + "','" + Address + "')", conn);
                 cmd.Parameters.AddWithValue("@photo", photo);


                // conn.Close();
                 conn.Open();

                 cmd.ExecuteNonQuery();

                 conn.Close();
                 MessageBox.Show("saved");


             }
             catch(Exception ee)
             {
                 MessageBox.Show("insert error" + ee);
             }

             */










            try
            {
                //conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                command.CommandText = "insert into UserTable(Gmail,Name,Phone,Upassword,MediaLink,Ugroup,Address)values('" + Gmail + "','" + Name + "','" + Phone + "','" + Password + "','" + MediaLink + "','" + Group + "','" + Address + "')";

               
                
                command.ExecuteNonQuery();

                conn.Close();
                //if(v!=0)
                mgs.Text = "Added successfully!";
                clr();
               // MessageBox.Show("connection success");

               

            }
            catch (Exception exs)
            {
                MessageBox.Show("\t\tinsert error\n\n" + "  " + exs.ToString());
            }

        }
    }
}
