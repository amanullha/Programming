using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Home : Form
    {
       // Login obj = new Login();
        

        public Home()
        {
            InitializeComponent();
          //  MessageBox.Show("fg : " + Login.fg);
            if (!Login.fg) useraddButton.Visible = false;
        }

        private void panel2_Paint(object sender, PaintEventArgs e)
        {

        }
        private void hide_user_control()
        {
            add_User1.Hide();
            add_Category1.Hide();
            add_Product1.Hide();
            add_vendor1.Hide();
            sells_Product1.Hide();
            show_image1.Hide();
        }

        private void Home_Load(object sender, EventArgs e)
        {
            hide_user_control();
            show_image1.Show();
            show_image1.BringToFront();
        }

        private void useraddButton_Click(object sender, EventArgs e)
        {
            hide_user_control();

            add_User1.Show();
            add_User1.BringToFront();
        }

        private void addvendorbutton_Click(object sender, EventArgs e)
        {
            hide_user_control();

            add_vendor1.Show();
            add_vendor1.BringToFront();
        }

        private void createcategorybutton_Click(object sender, EventArgs e)
        {
            hide_user_control();

            add_Category1.Show();
            add_Category1.BringToFront();
        }

        private void addproductbutton_Click(object sender, EventArgs e)
        {
            hide_user_control();

            
            add_Product1.Show();
            add_Product1.BringToFront();
        }

        private void sellproductbutton_Click(object sender, EventArgs e)
        {
            hide_user_control();

            sells_Product1.Show();
            sells_Product1.BringToFront();
        }

        private void logout_Click(object sender, EventArgs e)
        {
            Login obj1 = new Login();
            obj1.Show();
            this.Hide();
        }

        private void generatereportbutton_Click(object sender, EventArgs e)
        {
            Generate_Report objj = new Generate_Report();
            objj.Show();
            this.Hide();
        }
    }
}
