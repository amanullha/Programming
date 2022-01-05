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
    public partial class AllContacts : Form
    {
        
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");
        private string currentuser = Login.umail;
        public AllContacts()
        {
            InitializeComponent();
        }

        private void dataGridView1_CellMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            show();
            name.Text = dataGridView1.SelectedRows[0].Cells["ucName"].Value.ToString();
            gmail.Text = dataGridView1.SelectedRows[0].Cells["ucGmail"].Value.ToString();
            phone.Text = dataGridView1.SelectedRows[0].Cells["ucPhone"].Value.ToString();
            group.Text = dataGridView1.SelectedRows[0].Cells["ucGroup"].Value.ToString();
            other.Text = dataGridView1.SelectedRows[0].Cells["ucOthers"].Value.ToString();
            address.Text = dataGridView1.SelectedRows[0].Cells["ucAddress"].Value.ToString();
            medialink.Text = dataGridView1.SelectedRows[0].Cells["ucMediaLink"].Value.ToString();
            gmail.ReadOnly = true;
        }



        private void hide()
        {
            label1.Visible = false;
            label2.Visible = false;
            label3.Visible = false;
            label4.Visible = false;
            label5.Visible = false;
            label6.Visible = false;
            label7.Visible = false;
            label8.Visible = false;

            name.Visible = false;
            gmail.Visible = false;
            phone.Visible = false;
            group.Visible = false;
            medialink.Visible = false;
            other.Visible = false;
            address.Visible = false;

        }
        private void show()
        {
            label1.Visible = true;
            label2.Visible = true;
            label3.Visible = true;
            label4.Visible = true;
            label5.Visible = true;
            label6.Visible = true;
            label7.Visible = true;
            label8.Visible = true;

            name.Visible = true;
            gmail.Visible = true;
            phone.Visible = true;
            group.Visible = true;
            medialink.Visible = true;
            other.Visible = true;
            address.Visible = true;

        }

        private void AllContacts_Load(object sender, EventArgs e)
        {
            hide();
            //currentuser = "ullha";
            try
            {
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from UserContact where ugmail='"+currentuser+ "' ORDER BY ucName ASC ";
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
                dataGridView1.Columns["ucGroup"].HeaderText = "Group";
                dataGridView1.Columns["ucMediaLink"].HeaderText = "Social Media Link";
                dataGridView1.Columns["ucOthers"].HeaderText = "Others";
                dataGridView1.Columns["ucAddress"].HeaderText = "Address";
                
                conn.Close();
               
            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }
        }

        private void Edit_Click(object sender, EventArgs e)
        {
            labeledit.Text = "";
            try
            {
                string s = "";

                // called updated function from UEdit class
                UEdit ob = new UEdit();
                //s = ob.UCEdit(cntu, Egt.Text, Ent.Text, Ept.Text, Emlt.Text, Eot.Text, Egpt.Text, Eat.Text);
                s = ob.UCEdit(currentuser,gmail.Text,name.Text,phone.Text,medialink.Text,other.Text,group.Text,address.Text);

                if (s == "ok")
                {
                    labeledit.Text = "Successfully Edited";
                    AllContacts_Load(sender, e);// gridview load again after Edited Contact

                    clr();//clear boxes
                    hide();

                }
                else MessageBox.Show(s);

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void clr()
        {
            name.Clear();
            phone.Clear();
            gmail.Clear();
            other.Clear();
            medialink.Clear();
            address.Clear();
            group.Clear();
        }
        private void delete_Click(object sender, EventArgs e)
        {
            labeldelete.Text = "";

            try
            {

                string p = "";
                CDelete ob = new CDelete();
               // MessageBox.Show("cu : ", cntu + "\nnaem : " + dnt.Text + " em  " + dgt.Text);
                p = ob.UCDelete(currentuser, name.Text, gmail.Text);

                if (p != "ok") MessageBox.Show(p);
                else
                {
                    labeldelete.Text = "Deleted Successfully";
                    AllContacts_Load(sender, e);// gridview load again after deleted Contact
                    clr();//clear boxes
                    hide();
                }

                }
            catch (Exception ep)
            {
                MessageBox.Show("Delete Error\n\n" + ep);
            }
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
            AllContacts ob = new AllContacts();
            ob.Show();
            this.Hide();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Process ob = new Process();
            ob.Show();
            this.Hide();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

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
    }
}
