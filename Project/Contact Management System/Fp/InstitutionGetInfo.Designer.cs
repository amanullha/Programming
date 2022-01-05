
namespace Fp
{
    partial class InstitutionGetInfo
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle2 = new System.Windows.Forms.DataGridViewCellStyle();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(InstitutionGetInfo));
            this.login = new System.Windows.Forms.Button();
            this.gmail = new System.Windows.Forms.TextBox();
            this.password = new System.Windows.Forms.TextBox();
            this.radioButton1 = new System.Windows.Forms.RadioButton();
            this.radioButton2 = new System.Windows.Forms.RadioButton();
            this.radioButton3 = new System.Windows.Forms.RadioButton();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.nameh = new System.Windows.Forms.Label();
            this.name = new System.Windows.Forms.Label();
            this.phoneh = new System.Windows.Forms.Label();
            this.phone = new System.Windows.Forms.Label();
            this.gmailh = new System.Windows.Forms.Label();
            this.gmaill = new System.Windows.Forms.Label();
            this.msg = new System.Windows.Forms.Label();
            this.done = new System.Windows.Forms.Button();
            this.fcontact = new System.Windows.Forms.Label();
            this.fcontacth = new System.Windows.Forms.Label();
            this.exit = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // login
            // 
            this.login.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(241)))), ((int)(((byte)(222)))), ((int)(((byte)(203)))));
            this.login.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Magenta;
            this.login.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.login.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.login.Location = new System.Drawing.Point(683, 266);
            this.login.Name = "login";
            this.login.Size = new System.Drawing.Size(147, 31);
            this.login.TabIndex = 0;
            this.login.Text = "Login";
            this.login.UseVisualStyleBackColor = false;
            this.login.Click += new System.EventHandler(this.login_Click);
            // 
            // gmail
            // 
            this.gmail.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gmail.Location = new System.Drawing.Point(80, 266);
            this.gmail.Name = "gmail";
            this.gmail.Size = new System.Drawing.Size(288, 29);
            this.gmail.TabIndex = 1;
            this.gmail.Text = "Enter Gmail";
            this.gmail.MouseClick += new System.Windows.Forms.MouseEventHandler(this.gmail_MouseClick);
            this.gmail.TextChanged += new System.EventHandler(this.gmail_TextChanged);
            // 
            // password
            // 
            this.password.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.password.Location = new System.Drawing.Point(374, 266);
            this.password.Name = "password";
            this.password.Size = new System.Drawing.Size(288, 29);
            this.password.TabIndex = 1;
            this.password.Text = "Enter Password";
            this.password.MouseClick += new System.Windows.Forms.MouseEventHandler(this.password_MouseClick);
            this.password.TextChanged += new System.EventHandler(this.password_TextChanged);
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize = true;
            this.radioButton1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(215)))), ((int)(((byte)(157)))), ((int)(((byte)(100)))));
            this.radioButton1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.radioButton1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioButton1.ForeColor = System.Drawing.Color.Purple;
            this.radioButton1.Location = new System.Drawing.Point(852, 269);
            this.radioButton1.Name = "radioButton1";
            this.radioButton1.Size = new System.Drawing.Size(87, 28);
            this.radioButton1.TabIndex = 2;
            this.radioButton1.TabStop = true;
            this.radioButton1.Text = "Admin";
            this.radioButton1.UseVisualStyleBackColor = false;
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize = true;
            this.radioButton2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(215)))), ((int)(((byte)(157)))), ((int)(((byte)(100)))));
            this.radioButton2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.radioButton2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioButton2.ForeColor = System.Drawing.Color.Purple;
            this.radioButton2.Location = new System.Drawing.Point(945, 269);
            this.radioButton2.Name = "radioButton2";
            this.radioButton2.Size = new System.Drawing.Size(94, 28);
            this.radioButton2.TabIndex = 2;
            this.radioButton2.TabStop = true;
            this.radioButton2.Text = "Faculty";
            this.radioButton2.UseVisualStyleBackColor = false;
            // 
            // radioButton3
            // 
            this.radioButton3.AutoSize = true;
            this.radioButton3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(215)))), ((int)(((byte)(157)))), ((int)(((byte)(100)))));
            this.radioButton3.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.radioButton3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioButton3.ForeColor = System.Drawing.Color.Purple;
            this.radioButton3.Location = new System.Drawing.Point(1045, 269);
            this.radioButton3.Name = "radioButton3";
            this.radioButton3.Size = new System.Drawing.Size(98, 28);
            this.radioButton3.TabIndex = 2;
            this.radioButton3.TabStop = true;
            this.radioButton3.Text = "Student";
            this.radioButton3.UseVisualStyleBackColor = false;
            // 
            // dataGridView1
            // 
            dataGridViewCellStyle1.BackColor = System.Drawing.Color.Teal;
            dataGridViewCellStyle1.ForeColor = System.Drawing.Color.White;
            this.dataGridView1.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this.dataGridView1.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(103)))), ((int)(((byte)(144)))), ((int)(((byte)(208)))));
            this.dataGridView1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewCellStyle2.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleLeft;
            dataGridViewCellStyle2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(181)))), ((int)(((byte)(235)))));
            dataGridViewCellStyle2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            dataGridViewCellStyle2.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            dataGridViewCellStyle2.SelectionBackColor = System.Drawing.SystemColors.Highlight;
            dataGridViewCellStyle2.SelectionForeColor = System.Drawing.SystemColors.HighlightText;
            dataGridViewCellStyle2.WrapMode = System.Windows.Forms.DataGridViewTriState.False;
            this.dataGridView1.DefaultCellStyle = dataGridViewCellStyle2;
            this.dataGridView1.Location = new System.Drawing.Point(706, 306);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dataGridView1.Size = new System.Drawing.Size(578, 582);
            this.dataGridView1.TabIndex = 173;
            this.dataGridView1.CellMouseDoubleClick += new System.Windows.Forms.DataGridViewCellMouseEventHandler(this.dataGridView1_CellMouseDoubleClick);
            this.dataGridView1.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.dataGridView1_MouseDoubleClick);
            // 
            // comboBox1
            // 
            this.comboBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(205, 405);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(280, 32);
            this.comboBox1.TabIndex = 174;
            this.comboBox1.Text = "Select Course";
            // 
            // nameh
            // 
            this.nameh.AutoSize = true;
            this.nameh.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.nameh.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.nameh.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.nameh.Location = new System.Drawing.Point(166, 561);
            this.nameh.Name = "nameh";
            this.nameh.Size = new System.Drawing.Size(83, 24);
            this.nameh.TabIndex = 175;
            this.nameh.Text = "Name : ";
            // 
            // name
            // 
            this.name.AutoSize = true;
            this.name.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.name.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.name.Location = new System.Drawing.Point(292, 561);
            this.name.Name = "name";
            this.name.Size = new System.Drawing.Size(66, 24);
            this.name.TabIndex = 175;
            this.name.Text = "label1";
            // 
            // phoneh
            // 
            this.phoneh.AutoSize = true;
            this.phoneh.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.phoneh.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.phoneh.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.phoneh.Location = new System.Drawing.Point(160, 610);
            this.phoneh.Name = "phoneh";
            this.phoneh.Size = new System.Drawing.Size(89, 24);
            this.phoneh.TabIndex = 175;
            this.phoneh.Text = "Phone : ";
            // 
            // phone
            // 
            this.phone.AutoSize = true;
            this.phone.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.phone.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.phone.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.phone.Location = new System.Drawing.Point(292, 610);
            this.phone.Name = "phone";
            this.phone.Size = new System.Drawing.Size(66, 24);
            this.phone.TabIndex = 175;
            this.phone.Text = "label1";
            // 
            // gmailh
            // 
            this.gmailh.AutoSize = true;
            this.gmailh.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.gmailh.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gmailh.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.gmailh.Location = new System.Drawing.Point(166, 652);
            this.gmailh.Name = "gmailh";
            this.gmailh.Size = new System.Drawing.Size(81, 24);
            this.gmailh.TabIndex = 175;
            this.gmailh.Text = "Gmail : ";
            // 
            // gmaill
            // 
            this.gmaill.AutoSize = true;
            this.gmaill.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.gmaill.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gmaill.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.gmaill.Location = new System.Drawing.Point(292, 652);
            this.gmaill.Name = "gmaill";
            this.gmaill.Size = new System.Drawing.Size(66, 24);
            this.gmaill.TabIndex = 175;
            this.gmaill.Text = "label1";
            // 
            // msg
            // 
            this.msg.AutoSize = true;
            this.msg.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(241)))), ((int)(((byte)(222)))), ((int)(((byte)(203)))));
            this.msg.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.msg.ForeColor = System.Drawing.Color.Green;
            this.msg.Location = new System.Drawing.Point(485, 148);
            this.msg.Name = "msg";
            this.msg.Size = new System.Drawing.Size(0, 24);
            this.msg.TabIndex = 176;
            this.msg.Click += new System.EventHandler(this.msg_Click);
            // 
            // done
            // 
            this.done.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(241)))), ((int)(((byte)(222)))), ((int)(((byte)(203)))));
            this.done.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Magenta;
            this.done.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.done.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.done.Location = new System.Drawing.Point(508, 405);
            this.done.Name = "done";
            this.done.Size = new System.Drawing.Size(147, 31);
            this.done.TabIndex = 0;
            this.done.Text = "Done";
            this.done.UseVisualStyleBackColor = false;
            this.done.Click += new System.EventHandler(this.done_Click);
            // 
            // fcontact
            // 
            this.fcontact.AutoSize = true;
            this.fcontact.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.fcontact.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.fcontact.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.fcontact.Location = new System.Drawing.Point(292, 691);
            this.fcontact.Name = "fcontact";
            this.fcontact.Size = new System.Drawing.Size(82, 24);
            this.fcontact.TabIndex = 175;
            this.fcontact.Text = "fcontact";
            // 
            // fcontacth
            // 
            this.fcontacth.AutoSize = true;
            this.fcontacth.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(99)))), ((int)(((byte)(100)))), ((int)(((byte)(113)))));
            this.fcontacth.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.fcontacth.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(239)))), ((int)(((byte)(180)))), ((int)(((byte)(109)))));
            this.fcontacth.Location = new System.Drawing.Point(117, 691);
            this.fcontacth.Name = "fcontacth";
            this.fcontacth.Size = new System.Drawing.Size(132, 24);
            this.fcontacth.TabIndex = 175;
            this.fcontacth.Text = "Contact info: ";
            // 
            // exit
            // 
            this.exit.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(241)))), ((int)(((byte)(222)))), ((int)(((byte)(203)))));
            this.exit.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Magenta;
            this.exit.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.exit.Location = new System.Drawing.Point(1169, 269);
            this.exit.Name = "exit";
            this.exit.Size = new System.Drawing.Size(94, 31);
            this.exit.TabIndex = 0;
            this.exit.Text = "Exit";
            this.exit.UseVisualStyleBackColor = false;
            this.exit.Click += new System.EventHandler(this.exit_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(215)))), ((int)(((byte)(157)))), ((int)(((byte)(100)))));
            this.label1.Font = new System.Drawing.Font("Wide Latin", 27.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Purple;
            this.label1.Location = new System.Drawing.Point(262, 38);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(820, 46);
            this.label1.TabIndex = 177;
            this.label1.Text = "Add Students and Faculty";
            // 
            // InstitutionGetInfo
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1284, 861);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.msg);
            this.Controls.Add(this.fcontacth);
            this.Controls.Add(this.fcontact);
            this.Controls.Add(this.gmaill);
            this.Controls.Add(this.gmailh);
            this.Controls.Add(this.phone);
            this.Controls.Add(this.phoneh);
            this.Controls.Add(this.name);
            this.Controls.Add(this.nameh);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.radioButton3);
            this.Controls.Add(this.radioButton2);
            this.Controls.Add(this.radioButton1);
            this.Controls.Add(this.password);
            this.Controls.Add(this.gmail);
            this.Controls.Add(this.done);
            this.Controls.Add(this.exit);
            this.Controls.Add(this.login);
            this.Name = "InstitutionGetInfo";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "InstitusionGetInfo";
            this.Load += new System.EventHandler(this.InstitusionGetInfo_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button login;
        private System.Windows.Forms.TextBox gmail;
        private System.Windows.Forms.TextBox password;
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.RadioButton radioButton3;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label nameh;
        private System.Windows.Forms.Label name;
        private System.Windows.Forms.Label phoneh;
        private System.Windows.Forms.Label phone;
        private System.Windows.Forms.Label gmailh;
        private System.Windows.Forms.Label gmaill;
        private System.Windows.Forms.Label msg;
        private System.Windows.Forms.Button done;
        private System.Windows.Forms.Label fcontact;
        private System.Windows.Forms.Label fcontacth;
        private System.Windows.Forms.Button exit;
        private System.Windows.Forms.Label label1;
    }
}