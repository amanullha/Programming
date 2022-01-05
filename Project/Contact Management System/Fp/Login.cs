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


namespace Fp
{
    public partial class Login : Form
    {
        private OleDbConnection connection = new OleDbConnection();
        public static string umail = "";
        public Login()
        {
            InitializeComponent();
           // conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";
            connection.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void Login_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Registration obj = new Registration();
            obj.Show();
            this.Hide();
        }

        private void loginb_Click(object sender, EventArgs e)
        {
            msg.Text = "";



            connection.Open();

            OleDbCommand command = new OleDbCommand();
            command.Connection = connection;
            command.CommandText = "select * from UserTable where Gmail='" + gmailt.Text + "'and Upassword='" + passwordt.Text + "'";

            OleDbDataReader reader = command.ExecuteReader();

            int count = 0;
            while (reader.Read())
            {
                count = count + 1;
            }

            connection.Close();
            umail = gmailt.Text;
            gmailt.Clear();
            passwordt.Clear();
            if (count == 1)
            {
                Deshbord obj = new Deshbord();
               // MessageBox.Show(gmailt.Text);
               // MessageBox.Show(umail);
                
                obj.Show();
                this.Hide();
            }
            else if (count > 1)
            {
                msg.Text = "Duplicate Admin Name and password";
            }
            else
            {
                msg.Text = "Admin Name and Password is NO CURRECT";

            }




        }

        private void passwordt_TextChanged(object sender, EventArgs e)
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
    }
}
