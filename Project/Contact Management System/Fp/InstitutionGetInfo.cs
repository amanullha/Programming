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
    public partial class InstitutionGetInfo : Form
    {
        private OleDbConnection connection = new OleDbConnection();

        public InstitutionGetInfo()
        {
            InitializeComponent();
            connection.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void dataGridView1_CellMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            name.Text = dataGridView1.SelectedRows[0].Cells["iname"].Value.ToString();
            gmaill.Text = dataGridView1.SelectedRows[0].Cells["igmail"].Value.ToString();
            phone.Text = dataGridView1.SelectedRows[0].Cells["iphone"].Value.ToString();

            string x = dataGridView1.SelectedRows[0].Cells["iposition"].Value.ToString();
            if (x == "Faculty")
            {
                fcontact.Visible = true;
                fcontacth.Visible = true;
                fcontact.Text = dataGridView1.SelectedRows[0].Cells["icontact"].Value.ToString();
            }
            else
            {
                fcontact.Visible = false;
                fcontacth.Visible = false;
            }
            show();
            
          
        }
        private void readcombo()
        {
            try
            {
                connection.Close();
                connection.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = connection;

                string query = " Select * From institusion where igmail='" + gmail.Text + "' and ipassword='"+password.Text+"'";
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox1.Items.Clear();
                while (reader.Read())
                {
                    string ad = reader["igroupcode"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);
                   
                    if (countSpaces != ad.Length)
                    {
                        comboBox1.Items.Add(ad);
                    }
                }
                connection.Close();

                if (comboBox1.Items.Count == 0)
                {

                    msg.Text = "You Have No Group";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void login_Click(object sender, EventArgs e)
        {
            msg.Text = "";

           if(password.Text== "Enter Password"||password.Text.Length==0|| gmail.Text == "Enter Gmail"|| gmail.Text.Length==0||(radioButton1.Checked==false && radioButton2.Checked==false&& radioButton3.Checked==false))
            {
                msg.Text = "Please All Information";
                return;
            }
           if(password.Text=="admin"&&gmail.Text=="admin" && radioButton1.Checked==true)
            {
                InstututionInsert ob = new InstututionInsert();
                ob.Show();
                this.Hide();
            }




            if(radioButton1.Checked==true)
            {
                if(gmail.Text=="admin" && password.Text=="password")
                {
                    InstututionInsert ob = new InstututionInsert();
                    ob.Show();
                    this.Hide();
                }
            }
            string teacher = "";
            if (radioButton2.Checked == true)
            {
                teacher = "Faculty";
            }
            if(radioButton3.Checked==true)
            {
                teacher = "Student";
            }
                msg.Text = "";
              
                connection.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = connection;
                command.CommandText = "select * from institusion where igmail='" + gmail.Text + "'and ipassword='" + password.Text + "' and iposition='"+teacher+"'";

                OleDbDataReader reader = command.ExecuteReader();

                int count = 0;
                while (reader.Read())
                {
                    count = count + 1;
                }

                connection.Close();
            
                if (count == 1)
                {
                    msg.Text = "Login";
                    
                    readcombo();
                comboBox1.Visible = true;
                done.Visible = true;
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

        private void done_Click(object sender, EventArgs e)
        {
            msg.Text = "";
            if(comboBox1.Text== "Select Course"||comboBox1.Text.Length==0|| password.Text == "Enter Password" || password.Text.Length == 0 || gmail.Text == "Enter Gmail" || gmail.Text.Length == 0 || (radioButton1.Checked == false && radioButton2.Checked == false && radioButton3.Checked == false))
            {
                msg.Text = "Please Select A Subject CODE";
                return;
            }
           try
            {
                connection.Close();
                connection.Open();

                OleDbCommand cmd = connection.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from institusion where igroupcode='" + comboBox1.Text + "' ORDER BY iposition ASC ";
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                dataGridView1.DataSource = dt;
                dataGridView1.Columns["iposition"].Visible = false;
                dataGridView1.Columns["ipassword"].Visible = false;
                dataGridView1.Columns["iinsname"].Visible = false;
                dataGridView1.Columns["igroupcode"].Visible = false;

                dataGridView1.Columns["iname"].HeaderText = "Name";
                dataGridView1.Columns["igmail"].HeaderText = "Gmail";
                dataGridView1.Columns["iphone"].HeaderText = "Phone";
                dataGridView1.Columns["icontact"].HeaderText = "Contact info";
                dataGridView1.Columns["ideptcode"].HeaderText = "Department";
            

                connection.Close();
                dataGridView1.Visible = true;

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }
        }

        private void gmail_MouseClick(object sender, MouseEventArgs e)
        {
            gmail.Text = "";
            hide();
        }

        private void password_MouseClick(object sender, MouseEventArgs e)
        {
            password.Text = "";
            hide();
        }

        private void dataGridView1_MouseDoubleClick(object sender, MouseEventArgs e)
        {

        }

        private void msg_Click(object sender, EventArgs e)
        {

        }
        private void show()
        {
            name.Visible = true;
            nameh.Visible = true;
            gmailh.Visible = true;
            gmaill.Visible = true;
            phone.Visible = true;
            phoneh.Visible = true;
        }
        private void hide()
        {
            name.Visible = false;
            nameh.Visible = false;
            gmailh.Visible = false;
            gmaill.Visible = false;
            phone.Visible = false;
            phoneh.Visible = false;
        }
        private void InstitusionGetInfo_Load(object sender, EventArgs e)
        {
            comboBox1.Visible = false;
            done.Visible = false;
            dataGridView1.Visible = false;
            hide();
            fcontact.Visible = false;
            fcontacth.Visible = false;

        }

        private void gmail_TextChanged(object sender, EventArgs e)
        {
            hide();
            comboBox1.Visible = false;
            done.Visible = false;
            fcontact.Visible = false;
            fcontacth.Visible = false;
            dataGridView1.Visible = false;
        }

        private void password_TextChanged(object sender, EventArgs e)
        {
            hide();
            password.PasswordChar = '*';
            comboBox1.Visible = false;
            done.Visible = false;
            fcontact.Visible = false;
            fcontacth.Visible = false;
            dataGridView1.Visible = false;

        }

        private void exit_Click(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();
        }
    }
}
