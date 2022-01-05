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
namespace WindowsFormsApp1
{
    public partial class Add_Product : UserControl
    {
        public Add_Product()
        {
            InitializeComponent();
            loadd();
            
        }

        public void loadd ()
        {
            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From CategoryTable  ";//where ugmail='" + currentuser + "'
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox1.Items.Clear();
                while (reader.Read())
                {
                    string ad = reader["c_name"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);

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
        
        private void Add_Product_Load(object sender, EventArgs e)
        {
            loadd();
        }

        

        private void donebutton_Click(object sender, EventArgs e)
        {
            string name = nametextBox.Text;
            string com1 = comboBox1.Text;
            string com2 = comboBox2.Text;
            string com3 = comboBox3.Text;
            string com4 = comboBox4.Text;

            string price = pricetextBox.Text;
            string unit = unittextBox.Text;
            string pcid = name+com1 + com2+com3+com4;

            if(name.Length==0 || com1.Length==0 || com2.Length==0 ||price.Length==0 || unit.Length==0)
            {
                mgs.Text = "Enter vaid info";
                return;
            }

            try
            {

                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";


                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;


                command.CommandText = "insert into ProductTable(p_c_id,p_name,p_price,p_unit)values('" + pcid + "','" + name + "','" + price + "','" + unit + "')";



                command.ExecuteNonQuery();
                mgs.Text = "";

                nametextBox.Text = "";
                pricetextBox.Text = "";
                unittextBox.Text = "";
                loadd();

                mgs.Text = "Product added!";

                conn.Close();
            }
            catch (Exception te)
            {
                MessageBox.Show(" error " + te);
            }
        }

        private void updatebutton_Click(object sender, EventArgs e)
        {
            string name = nametextBox.Text;
            string com1 = comboBox1.Text;
            string com2 = comboBox2.Text;
            string com3 = comboBox3.Text;
            string com4 = comboBox4.Text;
            string price = pricetextBox.Text;
            string unit = unittextBox.Text;
            string pcid = name + com1 + com2 + com3 + com4;

            if (name.Length == 0 || com1.Length == 0 || com2.Length == 0 || unit.Length == 0)
            {
                mgs.Text = "Enter vaid info";
                return;
            }


            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From ProductTable where p_c_id='" + pcid + "' and p_name='"+name+"' ";
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                string ad ="";
                while (reader.Read())
                {
                    ad = reader["p_unit"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);
                }
                conn.Close();

                int nowunit = Convert.ToInt32(unittextBox.Text);
                int oldunit = Convert.ToInt32(ad);
                int currentunit = nowunit + oldunit;

                MessageBox.Show("old unit: " + oldunit+"\nnow unit: " + nowunit+"\ntotal unit: " + currentunit);
               


                //Update unit
                
                try
                {
                    conn.Close();
                    conn.Open();

                    OleDbCommand cmd = conn.CreateCommand();
                    cmd.Connection = conn;

                    query = "";
                    query = "UPDATE ProductTable SET p_unit='" + currentunit + "' where p_c_id='" + pcid + "'";// and u_name='" + name + "'";

                    cmd.CommandText = query;

                    cmd.ExecuteNonQuery();
                    mgs.Text = "Updated Product Successfully";
                    conn.Close();
                }
                catch(Exception ep)
                { MessageBox.Show("error on update \n" + ep); }




                

            }
            catch (Exception ex)
            {
                MessageBox.Show("error on get value \n"+ex.ToString());
            }
        }


        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox2.Items.Clear();
            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From CategoryTable where c_name='" + comboBox1.Text + "' ";//
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox2.Items.Clear();
                while (reader.Read())
                {
                    string ad = reader["c_gender"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);

                    if (countSpaces != ad.Length)
                    {
                        comboBox2.Items.Add(ad);
                    }
                }
                conn.Close();

                if (comboBox2.Items.Count == 0)
                {

                    mgs.Text = "You Have No Group";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox3.Items.Clear();
            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From CategoryTable where c_name='"+comboBox1.Text+"' and c_gender='" + comboBox2.Text + "' ";//
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox3.Items.Clear();
                while (reader.Read())
                {
                    string ad = reader["c_color"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);

                    if (countSpaces != ad.Length)
                    {
                        comboBox3.Items.Add(ad);
                    }
                }
                conn.Close();

                if (comboBox3.Items.Count == 0)
                {

                    mgs.Text = "You Have No Group";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }

        }

    

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox4.Items.Clear();
            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From CategoryTable where c_name='" + comboBox1.Text + "' and c_gender='" + comboBox2.Text + "'and c_color='" + comboBox3.Text + "' ";//
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

                comboBox4.Items.Clear();
                while (reader.Read())
                {
                    string ad = reader["c_size"].ToString();
                    int countSpaces = ad.Count(Char.IsWhiteSpace);

                    if (countSpaces != ad.Length)
                    {
                        comboBox4.Items.Add(ad);
                    }
                }
                conn.Close();

                if (comboBox4.Items.Count == 0)
                {

                    mgs.Text = "You Have No Group";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
    }
}
