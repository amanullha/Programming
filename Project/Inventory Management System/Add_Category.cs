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
    public partial class Add_Category : UserControl
    {

        public Add_Category()
        {
            InitializeComponent();
        }

        private void Add_Category_Load(object sender, EventArgs e)
        {

        }

        private void donebutton_Click(object sender, EventArgs e)
        {
            string name = categorynametextBox.Text, value = categorygendertextBox.Text;
            string gender = categorygendertextBox.Text, color = colortextBox.Text, size = sizetextBox.Text;
           // DateTime aDate = DateTime.Now;
            string c_id = name + gender+color+size;// + DateTime.Now.ToString("dddd, dd MMMM yyyy");

            if (name.Length==0 || gender.Length == 0 || color.Length==0 || size.Length==0)
            {
                mgs.Text = "Enter vaid information";
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
                command.CommandText = "select * from CategoryTable where c_id='" + c_id + "'";

                OleDbDataReader reader = command.ExecuteReader();

                int count = 0;
                while (reader.Read())
                {
                    count = count + 1;
                }

                conn.Close();

                if (count == 1)
                {
                    mgs.Text = "Information already exits in the data base";
                    return;

                }

                else
                {
                    try
                    {
                        conn.Close();
                        conn.Open();

                        // OleDbCommand command = new OleDbCommand();
                        command.Connection = conn;
                        command.CommandText = "insert into CategoryTable(c_id,c_name,c_gender,c_color,c_size)values('" + c_id + "','" + name + "','" + gender + "','" + color + "','" + size + "')";

                        command.ExecuteNonQuery();

                        conn.Close();

                        mgs.Text = "Added successfully!";


                        colortextBox.Text = "";
                        sizetextBox.Text = "";

                    }
                    catch (Exception exs)
                    {
                        MessageBox.Show("\t\tinsert category error\n\n" + "  " + exs.ToString());
                    }

                }




            }
            catch (Exception exs)
            {
                MessageBox.Show("\t\tfind value in category error\n\n" + "  " + exs.ToString());
            }



        }

        private void categorynametextBox_MouseClick(object sender, MouseEventArgs e)
        {
            mgs.Text = "";
        }

        private void categoryvaluetextBox_MouseClick(object sender, MouseEventArgs e)
        {
            mgs.Text = "";
        }
    }
}
