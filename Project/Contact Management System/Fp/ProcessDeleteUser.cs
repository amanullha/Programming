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
    public partial class ProcessDeleteUser : Form
    {
        private OleDbConnection conn = new OleDbConnection();
        private string cntu = Login.umail;
        public ProcessDeleteUser()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

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

        private void deleted_Click(object sender, EventArgs e)
        {
            alad.Text = "";
          try
            {
               
                string p = "";
                CDelete ob = new CDelete();
                MessageBox.Show("cu : ",cntu+"\nnaem : "+ dnt.Text+" em  "+dgt.Text);
                p = ob.UCDelete(cntu, dnt.Text, dgt.Text);

                if (p != "ok") MessageBox.Show(p);
                else alad.Text = "Deleted Successfully";
               
            }
            catch(Exception ep)
            {
                MessageBox.Show("Delete Error\n\n" + ep);
            }
           
        }

        private void dsb_Click(object sender, EventArgs e)
        {
            alad.Text = "";
            noo.Text = "";
            mgs.Text = "";
            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            string query = "";
            query = "Select * from UserContact where ugmail='" + cntu + "' and ucGmail='" + dnt.Text + "' and ucName='"+dgt.Text+"'";

            cmd.CommandText = query;

            int f = 0;
            OleDbDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                f++;
                dntt.Text = reader["ucName"].ToString();
                dgtt.Text = reader["ucGmail"].ToString();

                dpt.Text = reader["ucPhone"].ToString();
               
                dmlt.Text = reader["ucMediaLink"].ToString();
                dat.Text = reader["ucAddress"].ToString();

                dgpt.Text = reader["ucGroup"].ToString();
                dot.Text = reader["ucOthers"].ToString();

            }

            conn.Close();

            if (f == 0)
            {
                mgs.Text = "Invalid Information Entered. Please Try AGAIN";
            }
            else

                return;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Show();
        }

        private void au_Click(object sender, EventArgs e)
        {
            ProcessAddUser ob = new ProcessAddUser();
            ob.Show();
            this.Hide();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            ProcessEditUser ob = new ProcessEditUser();
            ob.Show();
            this.Hide();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
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

        private void ProcessDeleteUser_Load(object sender, EventArgs e)
        {

        }
    }
}
