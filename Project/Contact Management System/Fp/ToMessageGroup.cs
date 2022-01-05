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
    public partial class ToMessageGroup : Form
    {
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");
        string currentuser = Login.umail;
         //string currentuser = "contact2";
        string replyname = "", replygmail = "";
        public ToMessageGroup()
        {
            InitializeComponent();
            
        }

        private void groupcontact_Click(object sender, EventArgs e)
        {
            GroupContact ob = new GroupContact();
            ob.Show();
            this.Hide();
        }

        private void allcontact_Click(object sender, EventArgs e)
        {
            AllContacts ob = new AllContacts();
            ob.Show();
            this.Hide();
        }

        private void message_Click(object sender, EventArgs e)
        {

        }

        private void process_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();
        }

        private void sendmessage_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
            ob.Show();
            this.Hide();
        }

        private void inbox_Click(object sender, EventArgs e)
        {
            ToMessagesInbox ob = new ToMessagesInbox();
            ob.Show();
            this.Hide();
        }

        private void ToMessageGroup_Load(object sender, EventArgs e)
        {
            dataGridView2.Visible = false;
            hide();
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                //MessageBox.Show(currentuser);

               // string query = " Select * From Messages where togmail='" + currentuser + "'";
               // string query = " Select * From UserContact where togmail='" + currentuser + "'";
               // string query = " Select * From UserContact where togmail='" + currentuser + "'";
                 string query = " Select * From UserContact where ugmail='" + currentuser + "'";

                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox1.Items.Clear();
                while (reader.Read())
                {
                    //string ad = reader["Mgroup"].ToString();
                    string ad = reader["ucGroup"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);
                    // if (ad != " ")
                    if (countSpaces != ad.Length)
                    {
                        comboBox1.Items.Add(ad);
                    }
                }
                conn.Close();

                if (comboBox1.Items.Count == 0)
                {
                   
                    mgs.Text = "You Have No Group";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
        private void hide()
        {
            write.Visible = false;
            replybox.Visible = false;
            reply.Visible = false;
            dataGridView1.Visible = false;
        }
        private void show()
        {
            write.Visible = true;
            replybox.Visible = true;
            reply.Visible = true;
            dataGridView1.Visible = true;
        }

        private void reply_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            if (comboBox1.Text == "Select Group" || comboBox1.Text.Length == 0)
            {
                mgs.Text = "Please select a group";
                return;
            }
            if (replybox.Text.Length == 0)
            {
                mgs.Text = "Please Write something";
                return;
            }
            ana();
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                
               // MessageBox.Show("gmai: " + replygmail + "\n name : " + replyname);
                
                //MessageBox.Show("gmai: " + replygmail + "\n name : " + replyname);
                command.CommandText = "insert into Messages(fromgmail,fromname,message,Mgroup)values('" + replygmail + "','" + replyname + "','" + replybox.Text + "','" + comboBox1.Text + "')";
                command.ExecuteNonQuery();

                conn.Close();
                replybox.Text = "";
                mgs.Text = "Message sent";
                done_Click(sender, e);

            }
            catch (Exception exs)
            {
                MessageBox.Show("\t\tMessage sending error\n\n" + "  " + exs.ToString());
            }






        }
        private void ana()
        {
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from UserTable where Gmail='" + currentuser + "'";//togmail ='" + currentuser + "' and
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                dataGridView2.DataSource = dt;



                replygmail = dataGridView2.SelectedRows[0].Cells["Gmail"].Value.ToString();
                replyname = dataGridView2.SelectedRows[0].Cells["Name"].Value.ToString();




                conn.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }

        }
       

        private void done_Click(object sender, EventArgs e)
        {

            mgs.Text = "";
            if (comboBox1.Text == "Select Group" || comboBox1.Text.Length == 0)
            {
                mgs.Text = "Please select a group";
                return;
            }
            show();
            //MessageBox.Show(" gp " + comboBox1.Text);
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from Messages where Mgroup='" + comboBox1.Text.ToString() + "' ORDER BY Time DESC";//togmail ='" + currentuser + "' and
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                dataGridView1.DataSource = dt;

                //replygmail=dataGridView1.Columns["togmail"].ToString();
                // replyname=dataGridView1.Columns["toname"].ToString();

                replyname = dataGridView1.SelectedRows[0].Cells["toname"].Value.ToString();
                replygmail = dataGridView1.SelectedRows[0].Cells["togmail"].Value.ToString();

                // MessageBox.Show("name " + replyname + "\ngmil " + replygmail);
                dataGridView1.Columns["togmail"].Visible = false;
                dataGridView1.Columns["toname"].Visible = false;

                dataGridView1.Columns["time"].Visible = false;
                dataGridView1.Columns["fromgmail"].Visible = false;
                dataGridView1.Columns["Mgroup"].Visible = false;


                dataGridView1.Columns["fromname"].HeaderText = "Name";
                //dataGridView1.Columns["fromgmail"].HeaderText = "Gmail";
                dataGridView1.Columns["message"].HeaderText = "Message";


                dataGridView1.AutoResizeColumns();
                dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.AllCells;



                conn.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }
        }
    }
}
