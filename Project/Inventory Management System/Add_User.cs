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
    public partial class Add_User : UserControl
    {
        public Add_User()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string gmail = textBox1.Text, password = textBox2.Text;

            if(gmail.Length==0 || password.Length==0)
            {
                mgs.Text = "Please Enter valid information ";
                return;
            }



            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
               
                command.CommandText = "insert into UserTable(u_gmail,u_password)values('" + gmail + "','" + password + "')";

                command.ExecuteNonQuery();
                mgs.Text = "New user added";
                conn.Close();
            }
            catch (Exception exs)
            {
                MessageBox.Show("\t\tuser created error\n\n" + "  " + exs.ToString());
            }





        }
    }
}
