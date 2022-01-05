using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.OleDb;

namespace Fp
{
    public class UAdd
    {
  
        OleDbConnection conn = new OleDbConnection();

        public string Adduc(String pugmail, String pucName, String pucPhone, String pucGmail, String pucMediaLink, String pucOthers, String pucGroup, String pucAddress)
        {



            try
            {


                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";


                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;
                command.CommandText = "insert into UserContact(ugmail,ucName,ucPhone,ucGmail,ucMediaLink,ucOthers,ucGroup,ucAddress)values('" + pugmail + "','" + pucName + "','" + pucPhone + "','" + pucGmail + "','" + pucMediaLink + "','" + pucOthers + "','" + pucGroup + "','" + pucAddress + "')";



                command.ExecuteNonQuery();

                conn.Close();

                string s = "ok";
                return s;

            }
            catch(Exception te)
            {
                return te.ToString();
            }




        }
    }
}