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
    public partial class GroupContact : Form
    {
        private OleDbConnection conn = new OleDbConnection();
         private string currentuser = Login.umail;
       // private string currentuser = "ullha";
        
        bool f = true;
        public GroupContact()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void AC_Click(object sender, EventArgs e)
        {
            AllContacts ob = new AllContacts();
            ob.Show();
            this.Hide();
        }

        private void P_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void add_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void delete_Click(object sender, EventArgs e)
        {
            ProcessDeleteUser ob = new ProcessDeleteUser();
            ob.Show();
            this.Hide();
        }

        private void edit_Click(object sender, EventArgs e)
        {
            ProcessEditUser ob = new ProcessEditUser();
            ob.Show();
            this.Hide();
        }

        private void adduser_Click(object sender, EventArgs e)
        {
            ProcessAddUser ob = new ProcessAddUser();
            ob.Show();
            this.Hide();
        }

        private void GroupContact_Load(object sender, EventArgs e)
        {
            mgs.Text = "";
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From UserContact where ugmail='" + currentuser+ "' ";
                command.CommandText = query;
                OleDbDataReader reader= command.ExecuteReader();

                comboBox1.Items.Clear();
                while(reader.Read())
                {
                    string ad = reader["ucGroup"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);
                   // if (ad != " ")
                   if(countSpaces!=ad.Length)
                    {
                        comboBox1.Items.Add(ad); 
                    }
                }
                conn.Close();

            if(comboBox1.Items.Count==0)
                {
                    f = false;
                    mgs.Text = "You Have No Group";
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void DONE_Click(object sender, EventArgs e)
        {
            clr();
            mgs.Text = "";
            srmgs.Text = "";
            if (!f)
            {
                mgs.Text = "You Have No Group";
                return;
            }
            if(comboBox1.Text.Length<=0)
            {
                mgs.Text = "Please Select a Group";
                return;
            }
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from UserContact where ugmail='" + currentuser + "'and ucGroup='"+comboBox1.Text+ "'";
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                dataGridView1.DataSource = dt;
                dataGridView1.Columns[0].Visible = false;
                //dataGridView1.Columns["ugmail"].HeaderText = "My gmail";

                dataGridView1.Columns["ucName"].HeaderText = "Name";
                dataGridView1.Columns["ucGmail"].HeaderText = "Gmail";
                dataGridView1.Columns["ucPhone"].HeaderText = "Phone";

                // dataGridView1.Columns["ucGroup"].HeaderText = "Group";
                dataGridView1.Columns["ucGroup"].Visible = false;

                dataGridView1.Columns["ucMediaLink"].HeaderText = "Social Media Link";
                dataGridView1.Columns["ucOthers"].HeaderText = "Others";
                dataGridView1.Columns["ucAddress"].HeaderText = "Address";

                conn.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }

           // textBox1.Text = "";
        }

        private void dataGridView1_CellMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            srmgs.Text = "";
            namee.Text = dataGridView1.SelectedRows[0].Cells["ucName"].Value.ToString();
            gmaill.Text = dataGridView1.SelectedRows[0].Cells["ucGmail"].Value.ToString();
            phonee.Text = dataGridView1.SelectedRows[0].Cells["ucPhone"].Value.ToString();
          
            otherr.Text = dataGridView1.SelectedRows[0].Cells["ucOthers"].Value.ToString();
            addresss.Text = dataGridView1.SelectedRows[0].Cells["ucAddress"].Value.ToString();
            medialinkk.Text = dataGridView1.SelectedRows[0].Cells["ucMediaLink"].Value.ToString();

            name.Text = "Name :";
            phone.Text = "Phone :";
            gmail.Text = "Gmail :";
            other.Text = "Others :";
            medialink.Text = "Social Media Link :";
            address.Text = "Address :";


           

           
        }
        private void clr()
        {
            name.Text = "";
            namee.Text = "";
            phone.Text = "";
            phonee.Text = "";
            gmail.Text = "";
            gmaill.Text = "";
            other.Text = "";
            otherr.Text = "";
            medialink.Text = "";
            medialinkk.Text = "";
            address.Text = "";
            addresss.Text = "";
           // textBox1.Clear();
        
        }

        private void textBox1_MouseClick(object sender, MouseEventArgs e)
        {
            textBox1.Text = "";
            textBox1.ForeColor = Color.White;
        }

        private void shift_Click(object sender, EventArgs e)
        {
            srmgs.Text = "";
            if (comboBox1.Text.Length == 0)
            {
                srmgs.Text = "Please Select a Group";
                return;

            }
           

            if (textBox1.Text.Length==0 || textBox1.Text== "Enter New Group Name")
            {
                srmgs.Text = "Please Enter The Name of\n The Group Want To Shift To";
                return;

            }
            if (gmaill.Text.Length == 0)
            {
                srmgs.Text = "Please Select a Contact";
                return;

            }

            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            
            string query = "";
            query = "UPDATE UserContact SET ucGroup='" + textBox1.Text + "'where ugmail='" + currentuser + "' and ucGmail='" + gmaill.Text + "' and ucName='" + namee.Text + "'";

            cmd.CommandText = query;

            cmd.ExecuteNonQuery();
            conn.Close();

            DONE_Click(sender, e);
            srmgs.Text = "Shifted successfully";
            GroupContact_Load(sender, e);
           // comboBox1.Items.Add(textBox1.Text.ToString());

            textBox1.Text = "";

        }

        private void remove_Click(object sender, EventArgs e)
        {
            srmgs.Text = "";

            if (gmaill.Text.Length == 0)
            {
                srmgs.Text = "Please Select a Contact";
                return;

            }
            conn.Close();
            conn.Open();

            OleDbCommand cmd = conn.CreateCommand();
            cmd.Connection = conn;
            string g = "";
            string query = "";
            query = "UPDATE UserContact SET ucGroup='" +g + "'where ugmail='" + currentuser + "' and ucGmail='" + gmaill.Text + "' and ucName='"+namee.Text+"'";

            cmd.CommandText = query;

            cmd.ExecuteNonQuery();
            conn.Close();

            DONE_Click(sender, e);
            GroupContact_Load(sender, e);
            srmgs.Text = "Removed successfully";


        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
            ob.Show();
            this.Hide();
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
    }
}
