using System;
using System.Data;
using Google.Protobuf;
using MySql.Data.MySqlClient;


public class Program
{
    static void Main()
    {
        Console.Write("Buenas tardes");

        string ConnectionString = 
        @"
        server=mysql-5707.dinaserver.com;
        port=3306;
        user=mouredev_read;
        password=mouredev_pass;
        database=moure_test;
         ";

         GetDataFromServer(ConnectionString);
    }


    private static void GetDataFromServer(string connectionString)
    {
        string queryString = "SELECT * FROM challenges";

        using (MySqlConnection connection = new MySqlConnection(connectionString))
        {
            try
            {
                MySqlCommand command = new MySqlCommand(queryString, connection);
                connection.Open();
                Console.Write("Conectado");
                Console.WriteLine();

                MySqlDataReader reader = command.ExecuteReader();

                Console.WriteLine("Data: ");
                while(reader.Read())
                {
                    /*
                    for(int i = 0; i < reader.FieldCount; i++)
                    {
                     Console.Write($"{reader[i].ToString()} | ");
                    }
                    */
                     int id = reader.GetInt32("id");
                     string name = reader.GetString("name");
                     string difficulty = reader.GetString("difficulty");
                     DateTime date = reader.GetDateTime("date");
                     Console.WriteLine("-----------");
                     Console.WriteLine($"id: {id}");
                     Console.WriteLine($"name: {name}");
                     Console.WriteLine($"difficulty: {difficulty}");
                     Console.WriteLine($"date: {date}");

                }
                reader.Close();
                connection.Close();
            }
            catch(MySqlException e)
            {
                Console.WriteLine($"Error code:  {e.Code}-{e.Message}");
            }
        }

    }
}