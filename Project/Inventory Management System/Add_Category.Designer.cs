
namespace WindowsFormsApp1
{
    partial class Add_Category
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.categorynamelabel = new System.Windows.Forms.Label();
            this.categoryvaluelabel = new System.Windows.Forms.Label();
            this.categorynametextBox = new System.Windows.Forms.TextBox();
            this.categorygendertextBox = new System.Windows.Forms.TextBox();
            this.donebutton = new System.Windows.Forms.Button();
            this.mgs = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.colortextBox = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.sizetextBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.DarkBlue;
            this.label1.Location = new System.Drawing.Point(480, 82);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(265, 37);
            this.label1.TabIndex = 0;
            this.label1.Text = "Create Category";
            // 
            // categorynamelabel
            // 
            this.categorynamelabel.AutoSize = true;
            this.categorynamelabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.categorynamelabel.ForeColor = System.Drawing.Color.Purple;
            this.categorynamelabel.Location = new System.Drawing.Point(306, 187);
            this.categorynamelabel.Name = "categorynamelabel";
            this.categorynamelabel.Size = new System.Drawing.Size(223, 24);
            this.categorynamelabel.TabIndex = 1;
            this.categorynamelabel.Text = "Category Name(Brand)";
            // 
            // categoryvaluelabel
            // 
            this.categoryvaluelabel.AutoSize = true;
            this.categoryvaluelabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.categoryvaluelabel.ForeColor = System.Drawing.Color.Purple;
            this.categoryvaluelabel.Location = new System.Drawing.Point(292, 248);
            this.categoryvaluelabel.Name = "categoryvaluelabel";
            this.categoryvaluelabel.Size = new System.Drawing.Size(237, 24);
            this.categoryvaluelabel.TabIndex = 2;
            this.categoryvaluelabel.Text = "Category Value(Gender)";
            // 
            // categorynametextBox
            // 
            this.categorynametextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.categorynametextBox.Location = new System.Drawing.Point(580, 187);
            this.categorynametextBox.Name = "categorynametextBox";
            this.categorynametextBox.Size = new System.Drawing.Size(198, 26);
            this.categorynametextBox.TabIndex = 3;
            this.categorynametextBox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.categorynametextBox_MouseClick);
            // 
            // categorygendertextBox
            // 
            this.categorygendertextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.categorygendertextBox.Location = new System.Drawing.Point(580, 246);
            this.categorygendertextBox.Name = "categorygendertextBox";
            this.categorygendertextBox.Size = new System.Drawing.Size(198, 26);
            this.categorygendertextBox.TabIndex = 4;
            this.categorygendertextBox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.categoryvaluetextBox_MouseClick);
            // 
            // donebutton
            // 
            this.donebutton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.donebutton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.donebutton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.donebutton.ForeColor = System.Drawing.Color.Purple;
            this.donebutton.Location = new System.Drawing.Point(840, 301);
            this.donebutton.Name = "donebutton";
            this.donebutton.Size = new System.Drawing.Size(106, 28);
            this.donebutton.TabIndex = 5;
            this.donebutton.Text = "Done";
            this.donebutton.UseVisualStyleBackColor = true;
            this.donebutton.Click += new System.EventHandler(this.donebutton_Click);
            // 
            // mgs
            // 
            this.mgs.AutoSize = true;
            this.mgs.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.mgs.Location = new System.Drawing.Point(577, 160);
            this.mgs.Name = "mgs";
            this.mgs.Size = new System.Drawing.Size(0, 24);
            this.mgs.TabIndex = 6;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.Color.Purple;
            this.label3.Location = new System.Drawing.Point(312, 313);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(217, 24);
            this.label3.TabIndex = 2;
            this.label3.Text = "Category Value(Color)";
            // 
            // colortextBox
            // 
            this.colortextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.colortextBox.Location = new System.Drawing.Point(581, 313);
            this.colortextBox.Name = "colortextBox";
            this.colortextBox.Size = new System.Drawing.Size(198, 26);
            this.colortextBox.TabIndex = 4;
            this.colortextBox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.categoryvaluetextBox_MouseClick);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.ForeColor = System.Drawing.Color.Purple;
            this.label4.Location = new System.Drawing.Point(322, 381);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(207, 24);
            this.label4.TabIndex = 2;
            this.label4.Text = "Category Value(Size)";
            // 
            // sizetextBox
            // 
            this.sizetextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.sizetextBox.Location = new System.Drawing.Point(580, 381);
            this.sizetextBox.Name = "sizetextBox";
            this.sizetextBox.Size = new System.Drawing.Size(198, 26);
            this.sizetextBox.TabIndex = 4;
            this.sizetextBox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.categoryvaluetextBox_MouseClick);
            // 
            // Add_Category
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.Controls.Add(this.mgs);
            this.Controls.Add(this.donebutton);
            this.Controls.Add(this.sizetextBox);
            this.Controls.Add(this.colortextBox);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.categorygendertextBox);
            this.Controls.Add(this.categorynametextBox);
            this.Controls.Add(this.categoryvaluelabel);
            this.Controls.Add(this.categorynamelabel);
            this.Controls.Add(this.label1);
            this.Name = "Add_Category";
            this.Size = new System.Drawing.Size(1243, 531);
            this.Load += new System.EventHandler(this.Add_Category_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label categorynamelabel;
        private System.Windows.Forms.Label categoryvaluelabel;
        private System.Windows.Forms.TextBox categorynametextBox;
        private System.Windows.Forms.TextBox categorygendertextBox;
        private System.Windows.Forms.Button donebutton;
        private System.Windows.Forms.Label mgs;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox colortextBox;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox sizetextBox;
    }
}
