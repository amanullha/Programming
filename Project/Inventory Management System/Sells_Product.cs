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
    public partial class Sells_Product : UserControl
    {
        int old_unti;
        string pcid_for_updat;
        string price_for_updat;
        public Sells_Product()
        {
            InitializeComponent();
        }

       

        private void button1_Click(object sender, EventArgs e)
        {
            mgs.Text = "";
            string name = textBox1.Text, brand = textBox2.Text, gender = textBox3.Text, color = textBox4.Text, size = textBox5.Text;

            if(name.Length==0 || brand.Length==0 || gender.Length==0 || color.Length==0 || size.Length==0)
            {
                mgs.Text = "Enter valid information";
                return;
            }

            string pcid = name + brand + gender + color + size;
            pcid_for_updat = pcid;






            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                string query = " Select * From ProductTable where p_c_id='" + pcid + "' ";//where ugmail='" + currentuser + "'
                command.CommandText = query;
                OleDbDataReader reader = command.ExecuteReader();

               // MessageBox.Show("pcid : " + pcid);
                string in_price = "", in_unit = "";
                bool f = true;
                while (reader.Read())
                {
                     in_price = reader["p_price"].ToString();
                     in_unit = reader["p_unit"].ToString();
                    f = false;
                    
                }
              if(f)
                {
                    mgs.Text = "Enter valid information";
                    return;
                }



                pricelabel.Text = "Per Unit Price is     :  " + in_price;
                unitlabel.Text = "Total unit availabe   :  " + in_unit;
                old_unti = Convert.ToInt32(in_unit);
                price_for_updat = in_price;
                conn.Close();














           
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }

            

            







        }


        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox6.Text.Length == 0 || old_unti < Convert.ToInt32(textBox6.Text)) 
            {
                mgs.Text = "Enter a valid unit";
                return;
            }


            int newunitt = old_unti - Convert.ToInt32(textBox6.Text);

            string newunit = Convert.ToString(newunitt);

            //Update unit


            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.Connection = conn;

                String query = "";
                query = "UPDATE ProductTable SET p_unit='" + newunit + "' where p_c_id='" + pcid_for_updat + "'";// and u_name='" + name + "'";

                cmd.CommandText = query;

                cmd.ExecuteNonQuery();
                mgs.Text = textBox6.Text +" Unit has been sold";

                conn.Close();


                 string p_time="", p_unit="", p_total="";

                //  DateTime aDate = DateTime.Now;
                //  p_time=DateTime.Now.ToString("dddd, dd MMMM yyyy");


                  p_unit = textBox6.Text;
                  int x = Convert.ToInt32(p_unit)*Convert.ToInt32(price_for_updat);
                  p_total = Convert.ToString(x);
                



                try
                {
                    //OleDbConnection conn = new OleDbConnection();
                    //conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                    conn.Close();
                    conn.Open();

                    OleDbCommand command = new OleDbCommand();
                    command.Connection = conn;
                  //  MessageBox.Show("id : " + pcid_for_updat);
                    command.CommandText = "insert into invoice(p_product_id,p_total,p_unit)values('" + pcid_for_updat + "','" + p_total + "','" + p_unit + "')";
                    //command.CommandText = "insert into invoice(p_product_id)values('" + pcid_for_updat + "')";

                    command.ExecuteNonQuery();

                    conn.Close();
                }
                catch (Exception exs)
                {
                    MessageBox.Show("\t\treduce unit error\n\n" + "  " + exs.ToString());
                }







            }
            catch (Exception ep)
            { MessageBox.Show("error on update \n" + ep); }







        }

        private void Sells_Product_Load(object sender, EventArgs e)
        {

        }
    }
}
