
using System;

namespace Inventory
{
    partial class Form1
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
            this.gamiltextBox = new System.Windows.Forms.TextBox();
            this.passwordtextBox = new System.Windows.Forms.TextBox();
            this.gmaillable = new System.Windows.Forms.Label();
            this.passwordlabel = new System.Windows.Forms.Label();
            this.inven = new System.Windows.Forms.Label();
            this.loginbutton = new System.Windows.Forms.Button();
            this.adminradioButton = new System.Windows.Forms.RadioButton();
            this.managerradioButton = new System.Windows.Forms.RadioButton();
            this.passwordlabell = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.gmaillabel = new System.Windows.Forms.Label();
            this.inventorylabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // gamiltextBox
            // 
            this.gamiltextBox.Location = new System.Drawing.Point(358, 151);
            this.gamiltextBox.Name = "gamiltextBox";
            this.gamiltextBox.Size = new System.Drawing.Size(222, 20);
            this.gamiltextBox.TabIndex = 0;
            // 
            // passwordtextBox
            // 
            this.passwordtextBox.Location = new System.Drawing.Point(358, 209);
            this.passwordtextBox.Name = "passwordtextBox";
            this.passwordtextBox.Size = new System.Drawing.Size(222, 20);
            this.passwordtextBox.TabIndex = 1;
            // 
            // gmaillable
            // 
            this.gmaillable.Location = new System.Drawing.Point(0, 0);
            this.gmaillable.Name = "gmaillable";
            this.gmaillable.Size = new System.Drawing.Size(100, 23);
            this.gmaillable.TabIndex = 12;
            // 
            // passwordlabel
            // 
            this.passwordlabel.Location = new System.Drawing.Point(0, 0);
            this.passwordlabel.Name = "passwordlabel";
            this.passwordlabel.Size = new System.Drawing.Size(100, 23);
            this.passwordlabel.TabIndex = 11;
            // 
            // inven
            // 
            this.inven.Location = new System.Drawing.Point(0, 0);
            this.inven.Name = "inven";
            this.inven.Size = new System.Drawing.Size(100, 23);
            this.inven.TabIndex = 10;
            // 
            // loginbutton
            // 
            this.loginbutton.FlatAppearance.BorderColor = System.Drawing.Color.White;
            this.loginbutton.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(128)))));
            this.loginbutton.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.loginbutton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.loginbutton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loginbutton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.loginbutton.Location = new System.Drawing.Point(370, 317);
            this.loginbutton.Name = "loginbutton";
            this.loginbutton.Size = new System.Drawing.Size(147, 36);
            this.loginbutton.TabIndex = 6;
            this.loginbutton.Text = "Login";
            this.loginbutton.UseVisualStyleBackColor = true;
            this.loginbutton.Click += new System.EventHandler(this.loginbutton_Click);
            // 
            // adminradioButton
            // 
            this.adminradioButton.AutoSize = true;
            this.adminradioButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.adminradioButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.adminradioButton.Location = new System.Drawing.Point(370, 268);
            this.adminradioButton.Name = "adminradioButton";
            this.adminradioButton.Size = new System.Drawing.Size(77, 24);
            this.adminradioButton.TabIndex = 7;
            this.adminradioButton.TabStop = true;
            this.adminradioButton.Text = "Admin";
            this.adminradioButton.UseVisualStyleBackColor = true;
            // 
            // managerradioButton
            // 
            this.managerradioButton.AutoSize = true;
            this.managerradioButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.managerradioButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.managerradioButton.Location = new System.Drawing.Point(481, 268);
            this.managerradioButton.Name = "managerradioButton";
            this.managerradioButton.Size = new System.Drawing.Size(97, 24);
            this.managerradioButton.TabIndex = 8;
            this.managerradioButton.TabStop = true;
            this.managerradioButton.Text = "Manager";
            this.managerradioButton.UseVisualStyleBackColor = true;
            // 
            // passwordlabell
            // 
            this.passwordlabell.AutoSize = true;
            this.passwordlabell.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.passwordlabell.ForeColor = System.Drawing.Color.White;
            this.passwordlabell.Location = new System.Drawing.Point(229, 209);
            this.passwordlabell.Name = "passwordlabell";
            this.passwordlabell.Size = new System.Drawing.Size(100, 24);
            this.passwordlabell.TabIndex = 9;
            this.passwordlabell.Text = "Password";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.White;
            this.label1.Location = new System.Drawing.Point(229, 267);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(92, 24);
            this.label1.TabIndex = 9;
            this.label1.Text = "Login As";
            // 
            // gmaillabel
            // 
            this.gmaillabel.AutoSize = true;
            this.gmaillabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gmaillabel.ForeColor = System.Drawing.Color.White;
            this.gmaillabel.Location = new System.Drawing.Point(229, 151);
            this.gmaillabel.Name = "gmaillabel";
            this.gmaillabel.Size = new System.Drawing.Size(63, 24);
            this.gmaillabel.TabIndex = 9;
            this.gmaillabel.Text = "Gmail";
            // 
            // inventorylabel
            // 
            this.inventorylabel.AutoSize = true;
            this.inventorylabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inventorylabel.ForeColor = System.Drawing.Color.White;
            this.inventorylabel.Location = new System.Drawing.Point(366, 52);
            this.inventorylabel.Name = "inventorylabel";
            this.inventorylabel.Size = new System.Drawing.Size(222, 24);
            this.inventorylabel.TabIndex = 9;
            this.inventorylabel.Text = "Inventory Management";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Teal;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.inventorylabel);
            this.Controls.Add(this.gmaillabel);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.passwordlabell);
            this.Controls.Add(this.managerradioButton);
            this.Controls.Add(this.adminradioButton);
            this.Controls.Add(this.loginbutton);
            this.Controls.Add(this.inven);
            this.Controls.Add(this.passwordlabel);
            this.Controls.Add(this.gmaillable);
            this.Controls.Add(this.passwordtextBox);
            this.Controls.Add(this.gamiltextBox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void loginbutton_Click(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }

        #endregion

        private System.Windows.Forms.TextBox gamiltextBox;
        private System.Windows.Forms.TextBox passwordtextBox;
        private System.Windows.Forms.Label gmaillable;
        private System.Windows.Forms.Label passwordlabel;
        private System.Windows.Forms.Label inven;
        private System.Windows.Forms.Button loginbutton;
        private System.Windows.Forms.RadioButton adminradioButton;
        private System.Windows.Forms.RadioButton managerradioButton;
        private System.Windows.Forms.Label passwordlabell;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label gmaillabel;
        private System.Windows.Forms.Label inventorylabel;
    }
}

