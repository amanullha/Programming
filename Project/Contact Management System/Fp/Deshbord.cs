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
    public partial class Deshbord : Form
    {
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");

        private string currentuser = Login.umail;
        public Deshbord()
        {
            InitializeComponent();
        }

        private void Deshbord_Load(object sender, EventArgs e)
        {
            //MessageBox.Show(currentuser);
            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            string query = "";
            query = "Select * from UserTable where Gmail='" + currentuser + "'";

            cmd.CommandText = query;
            OleDbDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                
                nameb.Text = reader["Name"].ToString();
                phoneb.Text = reader["Phone"].ToString();
                gmailb.Text = reader["Gmail"].ToString();

                medialinkb.Text = reader["MediaLink"].ToString();
                groupb.Text = reader["Ugroup"].ToString();
                addressb.Text = reader["Address"].ToString();
                Passwordb.Text= reader["Upassword"].ToString();
                gmailb.ReadOnly=true;

            }

            conn.Close();

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            Login obj = new Login();
            obj.Show();
            this.Hide();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Process obj = new Process();
            obj.Show();
            this.Hide();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            GroupContact ob = new GroupContact();
            ob.Show();
            this.Hide();
        }

        private void replace_Click(object sender, EventArgs e)
        {
            try
            {


                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.Connection = conn;

                string query = "";
                query = "UPDATE UserTable SET Name='" + nameb.Text + "',Phone='" + phoneb.Text + "',MediaLink='" + medialinkb.Text + "',Address='" + addressb.Text + "',Ugroup='" + groupb.Text + "', Upassword='" + Passwordb.Text + "' where Gmail='" + currentuser + "'";

                cmd.CommandText = query;

                cmd.ExecuteNonQuery();
                conn.Close();
                rep.Text = "Profile Updated";
                Deshbord_Load( sender,  e);

            }
            catch(Exception en)
            {
                MessageBox.Show(en.ToString());
            }
            
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
    }
}
