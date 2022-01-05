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
    public partial class ToMessagesInbox : Form
    {
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");

         string currentuser = Login.umail;
       // string currentuser = "contact2";
        string replyname="", replygmail="";
        public ToMessagesInbox()
        {
            InitializeComponent();
        }

        private void hide()
        {
            name.Visible = false;
            namee.Visible = false;
            gmail.Visible = false;
            gmaill.Visible = false;
            message.Visible = false;
            messagebox.Visible = false;
            write.Visible = false;
            replybox.Visible = false;
            reply.Visible = false;
        }
        private void show()
        {
            name.Visible = true;
            namee.Visible = true;
            gmail.Visible = true;
            gmaill.Visible = true;
            message.Visible = true;
            messagebox.Visible = true;
            write.Visible = true;
            replybox.Visible = true;
            reply.Visible = true;
        }

        private void ToMessagesInbox_Load(object sender, EventArgs e)
        {
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from Messages where togmail='" + currentuser + "' ORDER BY Time DESC ";
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
                dataGridView1.Columns["Mgroup"].Visible = false;
             

                dataGridView1.Columns["fromname"].HeaderText = "Name"; 
                dataGridView1.Columns["fromgmail"].HeaderText = "Gmail";
                dataGridView1.Columns["message"].HeaderText = "Message";


                dataGridView1.AutoResizeColumns();
                dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.AllCells;



                conn.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }
            hide();
        }

        private void sendmessage_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
            ob.Show();
            this.Hide();
        }

        private void dataGridView1_CellMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            sshow.Text = "";
            replybox.Clear();
            show();
            namee.Text = dataGridView1.SelectedRows[0].Cells["fromname"].Value.ToString();
            gmaill.Text = dataGridView1.SelectedRows[0].Cells["fromgmail"].Value.ToString();
            messagebox.Text = dataGridView1.SelectedRows[0].Cells["message"].Value.ToString();
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

        private void reply_Click(object sender, EventArgs e)
        {
            sshow.Text = "";
            string r;
          
            messagesend ob = new messagesend();
           // MessageBox.Show(replygmail + "  " + replyname + "\n\n" + gmaill.Text + " " + namee.Text + "\n\n" + "message : " + replybox.Text);
           
            r = ob.send(replygmail, replyname,gmaill.Text,namee.Text,replybox.Text);

            if (r == "ok") sshow.Text = "Message REPLYED";
            else MessageBox.Show(r.ToString());

            hide();
        }

       
    }
}
