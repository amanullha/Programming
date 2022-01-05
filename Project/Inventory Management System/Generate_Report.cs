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
    public partial class Generate_Report : Form
    {
        public Generate_Report()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string start = "", end = "";

            start = dateTimePicker1.Text;
            end = dateTimePicker2.Text;
            MessageBox.Show(start + "\n\n" + end);







            try
            {
                OleDbConnection conn = new OleDbConnection();
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\Inventory\New Microsoft Access Database.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;
                cmd.CommandText = "Select * from invoice where p_time BETWEEN '"+start+"' AND '"+end+"' ";
                //WHERE SerialNo BETWEEN Serial_Start  AND Serial_End;

                //ugmail='" + currentuser + "'
                cmd.ExecuteNonQuery();

                DataTable dt = new DataTable();
                OleDbDataAdapter da = new OleDbDataAdapter(cmd);
                da.Fill(dt);

                

                dataGridView1.Columns["p_product_id"].HeaderText = "Product ID";
                dataGridView1.Columns["p_time"].HeaderText = "Purchase Time";
                dataGridView1.Columns["P_total"].HeaderText = "Total Taka";
                dataGridView1.Columns["p_unit"].HeaderText = "Unit";
               

                conn.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("Insert error  " + ex);
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Home oj = new Home();
            oj.Show();
            this.Hide();
        }
    }
}
