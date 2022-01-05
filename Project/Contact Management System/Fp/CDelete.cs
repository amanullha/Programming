using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.OleDb;
using System.Data;
namespace Fp
{
    public class CDelete
    {
        private OleDbConnection conn = new OleDbConnection();
        public string UCDelete(string currentuser,string dnt,string dgt)
        {
            string r = "ok";

            conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

            try
            {
                conn.Open();

                OleDbCommand cmd = conn.CreateCommand();
                cmd.CommandType = CommandType.Text;

                cmd.CommandText = "delete from UserContact where ugmail= '" + currentuser + "'and ucName='" + dnt + "' and ucGmail='" + dgt + "'";

                cmd.ExecuteNonQuery();

                conn.Close();

                return r;

            }
            catch (Exception ep)
            {
                return ep.ToString();
            }


           
        }

    }
}
