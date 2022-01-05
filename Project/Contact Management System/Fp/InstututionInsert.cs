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
    public partial class InstututionInsert : Form
    {
        private OleDbConnection conn = new OleDbConnection();
        string g, n, p, dc,ins, gc,ct,st,ps;
        bool ok = true;
        bool contactv = false;

        private void InstutusionInsert_Load(object sender, EventArgs e)
        {
            contactbox.Visible = false;
        }

        public InstututionInsert()
        {
            InitializeComponent();
            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

        }

        private void Status_TextChanged(object sender, EventArgs e)
        {

            if (Status.Text == "Faculty")
            {
                contactbox.Visible = true;
                contactv = true;
            }
            else if(Status.Text=="Student")
            {
                contactbox.Visible = false;
                contactv = false;
            }
        }

        private void contactbox_MouseClick(object sender, MouseEventArgs e)
        {
            contactbox.Text = "";
        }

        private void InstutusionInsert_Load_1(object sender, EventArgs e)
        {
            hide();
            contactbox.Visible = false;
        }

        private void exit_Click(object sender, EventArgs e)
        {
            Login ob = new Login();
            ob.Show();
            this.Hide();
        }

        private void gmail_MouseClick(object sender, MouseEventArgs e)
        {
            gmail.Text = "";
            mgs.Text = "";
            hide();
        }

        private string createpass()
        {
            string pss = "ulab";
            Random random = new Random();
            int num = random.Next()%999;
            return pss + num.ToString();
        }
        private string agerpass(string gg)
        {
            string ans = "ok";
            conn.Open();

            OleDbCommand command = new OleDbCommand();
            command.Connection = conn;
            command.CommandText = "select * from institusion where igmail='" + gg + "'";

            OleDbDataReader reader = command.ExecuteReader();

          
            while (reader.Read())
            {
              
                ans=reader["ipassword"].ToString();
            }

            conn.Close();

            return ans;
            
        }
        private void add_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            if (ok)
            {
                ct = contactbox.Text;
                dc = deptcode.Text;
                gc = classcode.Text;
                ins = institusion.Text;
                st = Status.Text;

                if (gc == "Select Class Code" || gc.Length == 0 || dc == "Select Department Code" || dc.Length == 0 || ins == "Select Institusion" || ins.Length == 0 || st == " Select Status" || st.Length == 0)
                {
                    mgs.Text = "Fill Up All The Box With Valid Information";
                    return;
                }
                if(contactv &&(contactbox.Text.Length==0 ||contactbox.Text== "Enter Contact info"))
                {
                    mgs.Text = "Fill The Address Box";
                    return;
                }
                string x = "";
                x = agerpass(g);
                if(x=="ok")
                {
                    ps = createpass();
                }
                else
                { ps = x; }
                if (st == "Student") ct = "";
                
                try
                {
                    conn.Close();
                    conn.Open();

                    OleDbCommand command = new OleDbCommand();
                    command.Connection = conn;
                    command.CommandText = "insert into institusion(igmail,ipassword,iname,iposition,iphone,icontact,ideptcode,igroupcode,iinsname)values('" + g + "','" + ps + "','" + n + "','" + st + "','" + p + "','" + ct + "','" + dc + "','" + gc + "','" + ins + "')";

                    command.ExecuteNonQuery();

                    conn.Close();

                    mgs.Text = "New Member Added!";
                   
                    messagetomember(ps,g);
                    hide();
                    contactbox.Visible = false;
                    //mgs.Text = "";
                }
                catch (Exception exs)
                {
                    MessageBox.Show("\t\tAlready exist " +
                        "   or   insert error\n\n" + "  " + exs.ToString());
                }
                return;
            }
        }

       private void messagetomember(string mps,string gml)
        {
            string from = "ulabadmin@edu.bd";
            string passmgs = "This is your password at ULAB:" + mps;
            try
            {
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                command.CommandText = "insert into Messages(fromgmail,togmail,message)values('" + from + "','" + gml + "','" + passmgs + "')";

                command.ExecuteNonQuery();

                conn.Close();   
            }
            catch (Exception te)
            {
                MessageBox.Show("Password massage send ERROR \n\n"+te);
            }

        }
        private void hide()
        {
            classcode.Visible = false;
            deptcode.Visible = false;
            institusion.Visible = false;
            add.Visible = false;
            Status.Visible = false;
        }
        private void show()
        {
            classcode.Visible = true;
            deptcode.Visible = true;
            institusion.Visible = true;
            add.Visible = true;
            Status.Visible = true;
        }
        private void search_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            try
            {
                conn.Close();
                conn.Open();
                OleDbCommand cmd = conn.CreateCommand();
                cmd.Connection = conn;
                string query = "";
                query = "Select * from UserTable where Gmail='" + gmail.Text + "'";

                cmd.CommandText = query;

                int f = 0;
                OleDbDataReader reader = cmd.ExecuteReader();

                while (reader.Read())
                {
                    f++;
                    g= reader["Gmail"].ToString();
                    n= reader["Name"].ToString();
                    p= reader["Phone"].ToString();
                   

                }

                conn.Close();

                if (f == 0)
                {
                    mgs.Text = "Invalid Gmail Address. Please Try AGAIN";
                    ok = false;
                    return;
                }
                else
                {
                    mgs.Text = "Active";
                    ok = true;
                    show();
                    return;
                }
            }
            catch(Exception ex)
            { MessageBox.Show(ex.ToString()); }
        }
    }
}
