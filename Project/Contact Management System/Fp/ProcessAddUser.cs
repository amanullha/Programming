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
    public partial class ProcessAddUser : Form
    {
        private OleDbConnection conn = new OleDbConnection();
        private string currentuser=Login.umail;
        public ProcessAddUser()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void profile_Click(object sender, EventArgs e)
        {
            Deshbord obj = new Deshbord();
            obj.Show();
            this.Hide();
        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login obj = new Login();
            obj.Show();
            this.Hide();
        }

        private void sb_Click(object sender, EventArgs e)
        {
            alad.Text = "";
            noo.Text = "";
            mgs.Text = "";
            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            string query = "";
            query = "Select * from UserTable where Gmail='" + ggt.Text + "' and Name='" + nnt.Text + "'";

            cmd.CommandText = query;

            int f = 0;
            OleDbDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                f++;
                nt.Text = reader["Name"].ToString();
                pt.Text = reader["Phone"].ToString();
                gt.Text = reader["Gmail"].ToString();
                mlt.Text = reader["MediaLink"].ToString();
                at.Text = reader["Address"].ToString();

            }

            conn.Close();

            if(f==0)
            {
                mgs.Text = "Invalid Information Entered. Please Try AGAIN";
            }
            else

            return;


        }

        private void added_Click(object sender, EventArgs e)
        {

            try
            {

                //chek already exist or not

                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                command.CommandText = "select * from UserContact where ugmail='" + currentuser + "'and ucName='" + nt.Text + "' and ucGmail='" + gt.Text + "'";

                OleDbDataReader reader = command.ExecuteReader();

                int count = 0;
                while (reader.Read())
                {
                    count = count + 1;
                }

                conn.Close();

                if (count == 1)
                {
                    noo.Text = "This User Already Added To Your Contact List";
                }
                else
                {
                    // if not exist in to contact list then add by calling add function("Addcu")
                UAdd ob = new UAdd();
                //Adduc(String pugmail, String pucName, String pucPhone, String pucGmail, String pucMediaLink, String pucOthers, String pucGroup, String pucAddress)
                MessageBox.Show("Current user added_clicked  " + currentuser);
                string ok = "";
                ok = ob.Adduc(currentuser, nt.Text, pt.Text, gt.Text, mlt.Text, ot.Text, gpt.Text, at.Text);

                if (ok == "ok")
                {
                    alad.Text = "Added Successfully";
                        nnt.Clear();
                        ggt.Clear();
                        nt.Clear();
                        gt.Clear();
                        mlt.Clear();
                        ot.Clear();
                        at.Clear();
                        gpt.Clear();
                        pt.Clear();

                }
                else
                {
                    MessageBox.Show(ok);
                }
            }

            }
            catch(Exception ex1)
            {
                MessageBox.Show("insert Erron in add function\n\n" + ex1);
            }
         
        }

        private void logout_Click_1(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();

        }

        private void profile_Click_1(object sender, EventArgs e)
        {
            Deshbord ob = new Deshbord();
            ob.Show();
            this.Hide();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            ProcessEditUser ob = new ProcessEditUser();
            ob.Show();
            this.Hide();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            ProcessDeleteUser ob = new ProcessDeleteUser();
            ob.Show();
            this.Hide();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            ProcessAddUser ob = new ProcessAddUser();
            ob.Show();
            this.Hide();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            AllContacts ob = new AllContacts();
            ob.Show();
            this.Hide();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            GroupContact ob = new GroupContact();
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

        private void nt_TextChanged(object sender, EventArgs e)
        {

        }

        private void ProcessAddUser_Load(object sender, EventArgs e)
        {

        }
    }
}
