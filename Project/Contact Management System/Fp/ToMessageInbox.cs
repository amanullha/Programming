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
    public partial class ToMessageInbox : Form
    {
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");

        // private readonly string currentuser = Login.umail;
        private readonly string currentuser = "contact2";
        private  string currentusername = "";
        public ToMessageInbox()
        {
            InitializeComponent();
        }

        private void ToMessageInbox_Load(object sender, EventArgs e)
        {
            dis_able();

            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from Messages where togmail='" + currentuser + "'";
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                dataGridView1.DataSource = dt;
                currentusername = dataGridView1.Columns["fromname"].ToString();

                dataGridView1.Columns["togmail"].Visible = false;
                dataGridView1.Columns["fromname"].Visible = false;
                //dataGridView1.Columns["ugmail"].HeaderText = "My gmail";

                dataGridView1.Columns["fromgmail"].HeaderText = "From";
                dataGridView1.Columns["toname"].HeaderText = "Name";
                dataGridView1.Columns["message"].HeaderText = "Message";

                dataGridView1.Columns["mcount"].Visible = false;

                dataGridView1.Columns["time"].Visible = false;

                dataGridView1.AutoResizeColumns();
                dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.AllCells;


                conn.Close();

            }
            catch (Exception ed)
            {
                MessageBox.Show(ed.ToString());

            }

        }

        private void dis_able()
        {
            name.Visible = false;
            namee.Visible = false;
            gmail.Visible = false;
            gmaill.Visible = false;
            write.Visible = false;
            replymessage.Visible = false;
            reply.Visible = false;
            message.Visible = false;
            msshow.Visible = false;
        }
        private void able()
        {
           // name.Visible = true;
           // namee.Visible = true;
            gmail.Visible = true;
            gmaill.Visible = true;
            write.Visible = true;
            replymessage.Visible = true;
            reply.Visible = true;
            message.Visible = true;
            msshow.Visible = true;
        }






        private void dataGridView1_CellMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            able();
            gmaill.Text = dataGridView1.SelectedRows[0].Cells["fromgmail"].Value.ToString();
            message.Text = dataGridView1.SelectedRows[0].Cells["message"].Value.ToString();
           
        }

        private void sendmessage_Click(object sender, EventArgs e)
        {
            ToMessage ob = new ToMessage();
            ob.Show();
            this.Hide();
        }

        private void inbox_Click(object sender, EventArgs e)
        {

        }

        private void reply_Click(object sender, EventArgs e)
        {
          
           
                string r="";
                messagesend ob = new messagesend();
                MessageBox.Show(currentuser + " " + gmaill.Text + " " + replymessage.Text);
              // r = ob.send(currentuser.ToString(),currentusername.ToString(), gmaill.Text, replymessage.Text);

                if (r == "ok") sshow.Text = "Message SEND SUCCESSFULLY";
                else MessageBox.Show(r.ToString());
           

        }
    }
}
