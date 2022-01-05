
namespace WindowsFormsApp1
{
    partial class Add_Product
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
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.backgroundWorker2 = new System.ComponentModel.BackgroundWorker();
            this.addproductlabel = new System.Windows.Forms.Label();
            this.productnamelabel = new System.Windows.Forms.Label();
            this.productlabel = new System.Windows.Forms.Label();
            this.productunitlabel = new System.Windows.Forms.Label();
            this.categorylabel = new System.Windows.Forms.Label();
            this.nametextBox = new System.Windows.Forms.TextBox();
            this.pricetextBox = new System.Windows.Forms.TextBox();
            this.unittextBox = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.donebutton = new System.Windows.Forms.Button();
            this.mgs = new System.Windows.Forms.Label();
            this.updatebutton = new System.Windows.Forms.Button();
            this.comboBox3 = new System.Windows.Forms.ComboBox();
            this.comboBox4 = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // addproductlabel
            // 
            this.addproductlabel.AutoSize = true;
            this.addproductlabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 48F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.addproductlabel.Location = new System.Drawing.Point(462, 41);
            this.addproductlabel.Name = "addproductlabel";
            this.addproductlabel.Size = new System.Drawing.Size(397, 73);
            this.addproductlabel.TabIndex = 0;
            this.addproductlabel.Text = "Add Product";
            // 
            // productnamelabel
            // 
            this.productnamelabel.AutoSize = true;
            this.productnamelabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.productnamelabel.Location = new System.Drawing.Point(169, 199);
            this.productnamelabel.Name = "productnamelabel";
            this.productnamelabel.Size = new System.Drawing.Size(143, 24);
            this.productnamelabel.TabIndex = 0;
            this.productnamelabel.Text = "Product Name";
            // 
            // productlabel
            // 
            this.productlabel.AutoSize = true;
            this.productlabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.productlabel.Location = new System.Drawing.Point(169, 263);
            this.productlabel.Name = "productlabel";
            this.productlabel.Size = new System.Drawing.Size(136, 24);
            this.productlabel.TabIndex = 0;
            this.productlabel.Text = "Product Price";
            // 
            // productunitlabel
            // 
            this.productunitlabel.AutoSize = true;
            this.productunitlabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.productunitlabel.Location = new System.Drawing.Point(169, 331);
            this.productunitlabel.Name = "productunitlabel";
            this.productunitlabel.Size = new System.Drawing.Size(124, 24);
            this.productunitlabel.TabIndex = 0;
            this.productunitlabel.Text = "Product Unit";
            // 
            // categorylabel
            // 
            this.categorylabel.AutoSize = true;
            this.categorylabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.categorylabel.Location = new System.Drawing.Point(929, 194);
            this.categorylabel.Name = "categorylabel";
            this.categorylabel.Size = new System.Drawing.Size(93, 24);
            this.categorylabel.TabIndex = 0;
            this.categorylabel.Text = "Category";
            // 
            // nametextBox
            // 
            this.nametextBox.Location = new System.Drawing.Point(339, 199);
            this.nametextBox.Name = "nametextBox";
            this.nametextBox.Size = new System.Drawing.Size(331, 20);
            this.nametextBox.TabIndex = 1;
            // 
            // pricetextBox
            // 
            this.pricetextBox.Location = new System.Drawing.Point(339, 266);
            this.pricetextBox.Name = "pricetextBox";
            this.pricetextBox.Size = new System.Drawing.Size(331, 20);
            this.pricetextBox.TabIndex = 1;
            // 
            // unittextBox
            // 
            this.unittextBox.Location = new System.Drawing.Point(339, 331);
            this.unittextBox.Name = "unittextBox";
            this.unittextBox.Size = new System.Drawing.Size(331, 20);
            this.unittextBox.TabIndex = 1;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(795, 263);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(167, 21);
            this.comboBox1.TabIndex = 2;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // comboBox2
            // 
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Location = new System.Drawing.Point(995, 263);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(158, 21);
            this.comboBox2.TabIndex = 3;
            this.comboBox2.SelectedIndexChanged += new System.EventHandler(this.comboBox2_SelectedIndexChanged);
            // 
            // donebutton
            // 
            this.donebutton.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.donebutton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.donebutton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.donebutton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.donebutton.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.donebutton.Location = new System.Drawing.Point(509, 419);
            this.donebutton.Name = "donebutton";
            this.donebutton.Size = new System.Drawing.Size(102, 38);
            this.donebutton.TabIndex = 4;
            this.donebutton.Text = "Add";
            this.donebutton.UseVisualStyleBackColor = true;
            this.donebutton.Click += new System.EventHandler(this.donebutton_Click);
            // 
            // mgs
            // 
            this.mgs.AutoSize = true;
            this.mgs.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.mgs.Location = new System.Drawing.Point(344, 156);
            this.mgs.Name = "mgs";
            this.mgs.Size = new System.Drawing.Size(0, 24);
            this.mgs.TabIndex = 0;
            // 
            // updatebutton
            // 
            this.updatebutton.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.updatebutton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.updatebutton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.updatebutton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.updatebutton.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.updatebutton.Location = new System.Drawing.Point(700, 419);
            this.updatebutton.Name = "updatebutton";
            this.updatebutton.Size = new System.Drawing.Size(102, 38);
            this.updatebutton.TabIndex = 4;
            this.updatebutton.Text = "Update";
            this.updatebutton.UseVisualStyleBackColor = true;
            this.updatebutton.Click += new System.EventHandler(this.updatebutton_Click);
            // 
            // comboBox3
            // 
            this.comboBox3.FormattingEnabled = true;
            this.comboBox3.Location = new System.Drawing.Point(795, 330);
            this.comboBox3.Name = "comboBox3";
            this.comboBox3.Size = new System.Drawing.Size(158, 21);
            this.comboBox3.TabIndex = 3;
            this.comboBox3.SelectedIndexChanged += new System.EventHandler(this.comboBox3_SelectedIndexChanged);
            // 
            // comboBox4
            // 
            this.comboBox4.FormattingEnabled = true;
            this.comboBox4.Location = new System.Drawing.Point(995, 330);
            this.comboBox4.Name = "comboBox4";
            this.comboBox4.Size = new System.Drawing.Size(158, 21);
            this.comboBox4.TabIndex = 3;
            // 
            // Add_Product
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.Controls.Add(this.updatebutton);
            this.Controls.Add(this.donebutton);
            this.Controls.Add(this.comboBox4);
            this.Controls.Add(this.comboBox3);
            this.Controls.Add(this.comboBox2);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.unittextBox);
            this.Controls.Add(this.pricetextBox);
            this.Controls.Add(this.nametextBox);
            this.Controls.Add(this.categorylabel);
            this.Controls.Add(this.productunitlabel);
            this.Controls.Add(this.productlabel);
            this.Controls.Add(this.mgs);
            this.Controls.Add(this.productnamelabel);
            this.Controls.Add(this.addproductlabel);
            this.Name = "Add_Product";
            this.Size = new System.Drawing.Size(1243, 531);
            this.Load += new System.EventHandler(this.Add_Product_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.ComponentModel.BackgroundWorker backgroundWorker2;
        private System.Windows.Forms.Label addproductlabel;
        private System.Windows.Forms.Label productnamelabel;
        private System.Windows.Forms.Label productlabel;
        private System.Windows.Forms.Label productunitlabel;
        private System.Windows.Forms.Label categorylabel;
        private System.Windows.Forms.TextBox nametextBox;
        private System.Windows.Forms.TextBox pricetextBox;
        private System.Windows.Forms.TextBox unittextBox;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.Button donebutton;
        private System.Windows.Forms.Label mgs;
        private System.Windows.Forms.Button updatebutton;
        private System.Windows.Forms.ComboBox comboBox3;
        private System.Windows.Forms.ComboBox comboBox4;
    }
}
