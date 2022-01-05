
namespace Fp
{
    partial class InstututionInsert
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(InstututionInsert));
            this.institusion = new System.Windows.Forms.ComboBox();
            this.deptcode = new System.Windows.Forms.ComboBox();
            this.classcode = new System.Windows.Forms.ComboBox();
            this.gmail = new System.Windows.Forms.TextBox();
            this.search = new System.Windows.Forms.Button();
            this.mgs = new System.Windows.Forms.Label();
            this.add = new System.Windows.Forms.Button();
            this.contactbox = new System.Windows.Forms.TextBox();
            this.Status = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.exit = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // institusion
            // 
            this.institusion.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.institusion.FormattingEnabled = true;
            this.institusion.Items.AddRange(new object[] {
            "ULAB"});
            this.institusion.Location = new System.Drawing.Point(933, 354);
            this.institusion.Name = "institusion";
            this.institusion.Size = new System.Drawing.Size(227, 33);
            this.institusion.TabIndex = 0;
            this.institusion.Text = "Select Institusion";
            // 
            // deptcode
            // 
            this.deptcode.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.deptcode.FormattingEnabled = true;
            this.deptcode.Items.AddRange(new object[] {
            "CSE",
            "BBA",
            "MSJ",
            "ETE",
            "EEE",
            "DEH"});
            this.deptcode.Location = new System.Drawing.Point(364, 354);
            this.deptcode.Name = "deptcode";
            this.deptcode.Size = new System.Drawing.Size(286, 33);
            this.deptcode.TabIndex = 0;
            this.deptcode.Text = "Select Department Code";
            // 
            // classcode
            // 
            this.classcode.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.classcode.FormattingEnabled = true;
            this.classcode.Items.AddRange(new object[] {
            "CSE 416",
            "CSE 401",
            "CSE 102",
            "CSE 104",
            "BBA 102",
            "BBA 205",
            "ETE  303",
            "ETE  305",
            "EEE 204",
            "EEE 302",
            "MSJ 203",
            "MSJ 304"});
            this.classcode.Location = new System.Drawing.Point(129, 354);
            this.classcode.Name = "classcode";
            this.classcode.Size = new System.Drawing.Size(229, 33);
            this.classcode.TabIndex = 0;
            this.classcode.Text = "Select Class Code";
            // 
            // gmail
            // 
            this.gmail.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gmail.Location = new System.Drawing.Point(385, 302);
            this.gmail.Name = "gmail";
            this.gmail.Size = new System.Drawing.Size(350, 31);
            this.gmail.TabIndex = 1;
            this.gmail.Text = "Enter User Gmail";
            this.gmail.MouseClick += new System.Windows.Forms.MouseEventHandler(this.gmail_MouseClick);
            // 
            // search
            // 
            this.search.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.search.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.search.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.search.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.search.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(246)))), ((int)(((byte)(213)))), ((int)(((byte)(155)))));
            this.search.Location = new System.Drawing.Point(741, 300);
            this.search.Name = "search";
            this.search.Size = new System.Drawing.Size(128, 35);
            this.search.TabIndex = 2;
            this.search.Text = "Search";
            this.search.UseVisualStyleBackColor = false;
            this.search.Click += new System.EventHandler(this.search_Click);
            // 
            // mgs
            // 
            this.mgs.AutoSize = true;
            this.mgs.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.mgs.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.mgs.Location = new System.Drawing.Point(482, 183);
            this.mgs.Name = "mgs";
            this.mgs.Size = new System.Drawing.Size(0, 25);
            this.mgs.TabIndex = 3;
            // 
            // add
            // 
            this.add.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.add.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.add.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.add.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.add.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(246)))), ((int)(((byte)(213)))), ((int)(((byte)(155)))));
            this.add.Location = new System.Drawing.Point(656, 699);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(271, 35);
            this.add.TabIndex = 2;
            this.add.Text = "ADD";
            this.add.UseVisualStyleBackColor = false;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // contactbox
            // 
            this.contactbox.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.contactbox.Location = new System.Drawing.Point(656, 393);
            this.contactbox.Multiline = true;
            this.contactbox.Name = "contactbox";
            this.contactbox.Size = new System.Drawing.Size(271, 287);
            this.contactbox.TabIndex = 1;
            this.contactbox.Text = "Enter Contact info";
            this.contactbox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.contactbox_MouseClick);
            // 
            // Status
            // 
            this.Status.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Status.FormattingEnabled = true;
            this.Status.Items.AddRange(new object[] {
            "Student",
            "Faculty"});
            this.Status.Location = new System.Drawing.Point(656, 354);
            this.Status.Name = "Status";
            this.Status.Size = new System.Drawing.Size(271, 33);
            this.Status.TabIndex = 0;
            this.Status.Text = " Select Status";
            this.Status.TextChanged += new System.EventHandler(this.Status_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Wide Latin", 27.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(303, 46);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(820, 46);
            this.label1.TabIndex = 4;
            this.label1.Text = "Add Students and Faculty";
            // 
            // exit
            // 
            this.exit.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.exit.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.exit.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.exit.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(246)))), ((int)(((byte)(213)))), ((int)(((byte)(155)))));
            this.exit.Location = new System.Drawing.Point(875, 300);
            this.exit.Name = "exit";
            this.exit.Size = new System.Drawing.Size(128, 35);
            this.exit.TabIndex = 2;
            this.exit.Text = "Exit";
            this.exit.UseVisualStyleBackColor = false;
            this.exit.Click += new System.EventHandler(this.exit_Click);
            // 
            // InstututionInsert
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(215)))), ((int)(((byte)(157)))), ((int)(((byte)(100)))));
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1383, 861);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.add);
            this.Controls.Add(this.mgs);
            this.Controls.Add(this.exit);
            this.Controls.Add(this.search);
            this.Controls.Add(this.contactbox);
            this.Controls.Add(this.gmail);
            this.Controls.Add(this.classcode);
            this.Controls.Add(this.deptcode);
            this.Controls.Add(this.Status);
            this.Controls.Add(this.institusion);
            this.ForeColor = System.Drawing.Color.Purple;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "InstututionInsert";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "InstutusionInsert";
            this.Load += new System.EventHandler(this.InstutusionInsert_Load_1);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox institusion;
        private System.Windows.Forms.ComboBox deptcode;
        private System.Windows.Forms.ComboBox classcode;
        private System.Windows.Forms.TextBox gmail;
        private System.Windows.Forms.Button search;
        private System.Windows.Forms.Label mgs;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.TextBox contactbox;
        private System.Windows.Forms.ComboBox Status;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button exit;
    }
}