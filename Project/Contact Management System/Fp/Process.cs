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
    public partial class Process : Form
    {
        private string Gmail, Name, Phone, Otherss, MediaLink, Address,Group;
        OleDbConnection conn = new OleDbConnection();
        private string currentuser = Login.umail;
        public Process()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";
        }

        private void ud_Click(object sender, EventArgs e)
        {
            ProcessAddUser obj = new ProcessAddUser();
            obj.Show();
            this.Hide();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            ProcessDeleteUser obj = new ProcessDeleteUser();
            obj.Show();
            this.Hide();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            ProcessEditUser ob = new ProcessEditUser();
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

        private void Process_Load(object sender, EventArgs e)
        {

        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login obj = new Login();
            obj.Show();
            this.Hide();
        }

        private void profile_Click(object sender, EventArgs e)
        {
            Deshbord obj = new Deshbord();
            obj.Show();
            this.Hide();
        }
        public void boxfill()
        {
            Gmail = gb.Text;
            Name = nb.Text;
            Phone = pb.Text;
            MediaLink = mlb.Text;
            Address = ab.Text;
            Otherss = ob.Text;
            Group = gpb.Text;
        }

        public void clr()
        {
            gb.Clear();
            nb.Clear();
            pb.Clear();
            mlb.Clear();
            ab.Clear();
            ob.Clear();
            gpb.Clear();
            
        }

        private void save_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            boxfill();


            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                command.CommandText = "insert into UserContact(ugmail,ucName,ucPhone,ucGmail,ucMediaLink,ucOthers,ucGroup,ucAddress)values('" + currentuser + "','" + Name + "','" + Phone + "','" + Gmail + "','" + MediaLink + "','" + Otherss + "','" + Group + "','" + Address + "')";



                command.ExecuteNonQuery();

                conn.Close();
                clr();
                mgs.Text = "New Contact Added!";



            }
            catch (Exception exs)
            {
                MessageBox.Show("\t\tinsert error\n\n" + "  " + exs.ToString());
            }

        }
    }
}
