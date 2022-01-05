using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.OleDb;
namespace Fp
{
    public class UEdit
    {
        OleDbConnection conn = new OleDbConnection(@"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;");

        public string UCEdit(string cm,string um,string un,string up,string uml,string uo,string ugp,string ua)
        {
            try
            {
                string r = "ok";
                conn.Close();
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.Connection = conn;

                string query = "";
                query= "UPDATE UserContact SET ucName='" + un + "',ucPhone='" + up + "',ucMediaLink='" + uml + "',ucOthers='" + uo + "',ucGroup='" + ugp + "', ucAddress='" + ua + "' where ugmail='" + cm + "' and ucGmail='"+um+"'";
                
                cmd.CommandText = query;

                cmd.ExecuteNonQuery();
                conn.Close();

                return r;

            }
            catch (Exception en)
            {
                return en.ToString();
            }


        }

    }
}
