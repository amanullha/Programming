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
    public partial class ToMessage : Form
    {
        OleDbConnection connection = new OleDbConnection();
        string currentuser = Login.umail;
       // string currentuser = "ullha";
        public ToMessage()
        {
            InitializeComponent();
            connection.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";
        }

        private string searchdendername(string sendergmail)
        {
            string ans="";
            connection.Open();
            try
            {
                OleDbCommand command = new OleDbCommand();
                command.Connection = connection;
                command.CommandText = "select * from UserTable where Gmail='" + sendergmail + "' ";

                OleDbDataReader reader = command.ExecuteReader();
              
                int count = 0;
                while (reader.Read())
                {
                    ans = reader["Name"].ToString();
                    count = count + 1;
                }

                return ans;
            }
            catch(Exception cc)
            { MessageBox.Show("search sender error\n\n+cc"); }

            return ans;
        }


        private void sentb_Click(object sender, EventArgs e)
        {
            string to, mgst,nam;
            nam = name.Text;
            to = gmail.Text;
            mgst = messageb.Text;



            connection.Open();

            OleDbCommand command = new OleDbCommand();
            command.Connection = connection;
            command.CommandText = "select * from UserContact where ugmail='" + currentuser + "'and ucName='" + nam + "'and ucGmail='" + to + "' ";

            OleDbDataReader reader = command.ExecuteReader();
           // MessageBox.Show("okk");
            int count = 0;
            while (reader.Read())
            {
                count = count + 1;
            }

            connection.Close();
           
            if (count == 1)
            {
                    string r,sendername;
                    sendername = searchdendername(currentuser);
                    messagesend ob = new messagesend();
                   // MessageBox.Show(currentuser + " " + to + " "+mgst);
                    r=ob.send(currentuser, sendername,to,nam, mgst);

                    if (r == "ok") sshow.Text = "Message SEND SUCCESSFULLY";
                    else MessageBox.Show(r.ToString());
            }
            else if (count > 1)
            {
                sshow.Text = "Duplicate Name Name and Gmail";
            }
            else
            {
                sshow.Text = "Name and Gmail is NOT CURRECT";

            }

        }

        private void ToMessage_Load(object sender, EventArgs e)
        {

        }

        private void name_TextChanged(object sender, EventArgs e)
        {

        }

        private void gmail_TextChanged(object sender, EventArgs e)
        {

        }

        private void messageb_TextChanged(object sender, EventArgs e)
        {

        }


        private void inbox_Click(object sender, EventArgs e)
        {
            ToMessagesInbox OB = new ToMessagesInbox();
            OB.Show();
            this.Hide();
        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            GroupContact ob = new GroupContact();
            ob.Show();
            this.Hide();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            AllContacts ob = new AllContacts();
            ob.Show();
            this.Hide();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
            ob.Show();
            this.Hide();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void group_Click(object sender, EventArgs e)
        {
            ToMessageGroup ob = new ToMessageGroup();
            ob.Show();
            this.Hide();
        }
    }
}
