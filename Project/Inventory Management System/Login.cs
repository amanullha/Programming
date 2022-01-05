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


namespace WindowsFormsApp1
{
    public partial class Login : Form
    {
       public static bool fg = false;
        public Login()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
           try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";
                conn.Open();
                //MessageBox.Show("connected");

                conn.Close();
            }
            catch(Exception ex)
            {
                MessageBox.Show("error \n\n"+ex);
            }

        }

        private void longinbutton_Click(object sender, EventArgs e)
        {
            if (managerradioButton.Checked && gmiltextBox.Text == "manager" && passwordtextBox.Text == "manager")
            {
                fg = true;
                Home obj = new Home();
                obj.Show();
                this.Hide();
            }
            else if (userradioButton.Checked)
            {
                mgs.Text = "";

                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                command.CommandText = "select * from UserTable where u_gmail='" + gmiltextBox.Text + "'and u_password='" + passwordtextBox.Text + "'";

                OleDbDataReader reader = command.ExecuteReader();

                int count = 0;
                while (reader.Read())
                {
                    count = count + 1;
                }

                conn.Close();

                if (count == 1)
                {
                    Home obj = new Home();

                    obj.Show();
                    this.Hide();
                }
                else if (count > 1)
                {
                    mgs.Text = "Duplicate Admin Name and password";
                }
                else
                {
                    mgs.Text = "Admin Name and Password is NO CURRECT";

                }
            }
            else mgs.Text = "Entered valid information";

        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.Environment.Exit(0);
        }
    }
}
