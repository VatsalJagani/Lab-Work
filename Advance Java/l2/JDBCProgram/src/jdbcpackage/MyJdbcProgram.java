/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package jdbcpackage;
import java.sql.*;
/**
 *
 * @author user1
 */
public class MyJdbcProgram {
    public static void main(String args[])
    {
        Connection con;
        Statement s;
        PreparedStatement ps;
        try{

            Class.forName("com.mysql.jdbc.Driver");

            con=DriverManager.getConnection("jdbc:mysql://192.168.29.1:3306/CE4047","CE4047","CE4047");

            s=con.createStatement();
            try{
                String queryCreate="create table student(stdId int PRIMARY KEY, name varchar(20), city varchar(20))";
                s.execute(queryCreate);
            }
            catch(Exception e)
            {
                System.out.println("Table already created");
            }
            try{
                String insertQuery1="insert into student values(1,'abc','nadiad')";
                s.executeUpdate(insertQuery1);
                String insertQuery2="insert into student values(2,'xyz','rajkot')";
                s.executeUpdate(insertQuery2);
                String insertQ="insert into student values(?,?,?)";
                ps=con.prepareStatement(insertQ);
                ps.setInt(1, 5);
                ps.setString(2, "other");
                ps.setString(3,"ahemdabad");
                ps.execute();
            }
            catch(Exception e)
            {
                System.out.println("Data already exist");
            }

            String sel="select * from student";
            ResultSet rs=s.executeQuery(sel);
            while(rs.next())
            {
                System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
            }
            rs.close();
            s.close();
            con.close();
        }
        catch(SQLException e)
        {
            System.out.println("error in sql"+e);
        }
        catch(ClassNotFoundException e)
        {
            System.out.println("error in classnotfound");
        }
    }
}
