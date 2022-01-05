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
    public partial class ProcessEditUser : Form
    {
        private OleDbConnection conn = new OleDbConnection();
        private string cntu = Login.umail;
        public ProcessEditUser()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";
            lastedited.Text = "";

        }

        private void edit_Click(object sender, EventArgs e)
        {
            try
            {
                string s = "";

                // called updated function from UEdit class
                UEdit ob = new UEdit();
                s = ob.UCEdit(cntu, Egt.Text, Ent.Text, Ept.Text, Emlt.Text, Eot.Text, Egpt.Text, Eat.Text);

                if (s == "ok")
                {
                    noo.Text = "Edited";
                    // clear all box

                    lastedited.Text = "Last Edited Name is " + Ent.Text + " and Gmail is " + Egt.Text;

                    Ent.Clear();
                    Egt.Clear();                 
                    Ept.Clear();
                    Emlt.Clear();
                    Eot.Clear();
                    Egpt.Clear();
                    Eat.Clear();
                    Entt.Clear();
                    Egtt.Clear();

                }
                else MessageBox.Show(s);

            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void sb_Click(object sender, EventArgs e)
        {
           // cntu = "ullha";
            alad.Text = "";
            noo.Text = "";
            mgs.Text = "";


            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            string query = "";
            query = "Select * from UserContact where ugmail='" + cntu + "' and ucGmail='" + Entt.Text + "' and ucName='" + Egtt.Text + "'";

            cmd.CommandText = query;

            int f = 0;
            OleDbDataReader reader = cmd.ExecuteReader();

            //fil in the box
            while (reader.Read())
            {
                f++;
                Ent.Text = reader["ucName"].ToString();
                Egt.Text = reader["ucGmail"].ToString();

                Ept.Text = reader["ucPhone"].ToString();

                Emlt.Text = reader["ucMediaLink"].ToString();
                Eat.Text = reader["ucAddress"].ToString();

                Egpt.Text = reader["ucGroup"].ToString();
                Eot.Text = reader["ucOthers"].ToString();

            }

            conn.Close();

            if (f == 0)
            {
                mgs.Text = "Invalid Information Entered. Please Try AGAIN";
            }
            else

                return;
        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();
        }

        private void profile_Click(object sender, EventArgs e)
        {
            Deshbord ob = new Deshbord();
            ob.Show();
            this.Hide();
        }

        private void au_Click(object sender, EventArgs e)
        {
            ProcessAddUser ob = new ProcessAddUser();
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
            Process ob= new Process();
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
    }
}
