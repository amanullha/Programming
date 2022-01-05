using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.OleDb;

namespace Fp
{
    class messagesend
    {
        OleDbConnection conn = new OleDbConnection();
        public string send(string from,string fname,string to ,string tname,string message)
        {
            try
            {
                conn.ConnectionString = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\User\Desktop\C#\Fp\CMS.accdb;Persist Security Info=False;";

                conn.Close();
                conn.Open();

                OleDbCommand command = new OleDbCommand();
                command.Connection = conn;

                command.CommandText = "insert into Messages(fromgmail,fromname,togmail,toname,message)values('" + from  + "','" + fname + "','" + to + "','" + tname + "','" + message + "')";

                command.ExecuteNonQuery();

                conn.Close();

                string s = "ok";
                return s;
            }
            catch (Exception te)
            {
                return te.ToString();
            }

        }
    }
}
