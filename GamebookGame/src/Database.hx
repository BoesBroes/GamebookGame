package;

import sys.db.Connection;
import sys.db.ResultSet;
import sys.db.Sqlite;


/**
 * ...
 * @author L'Jonathanos
 */
class Database 
{
	//opening the databases and requesting stuff from them
    static var dbhighscores:Connection;
	static var dbcredit:Connection;
	static var dbQ1:Connection;
	static var cnx = Sqlite;
    
	//connection with the highscores database
    public static function getInstance():Connection
    {
        if (dbhighscores == null)
        {
            dbhighscores = Sqlite.open('data/highscores.db');	
        }
         return dbhighscores;
    }
	
	//requesting highscores from the database limited by 10
    public static function getHighscores():ResultSet
    {
        return getInstance().request("select * from highscores desc limit 10");
    }
   
	//connecting with credits
    public static function getInstanceTwo():Connection
    {
        if (dbcredit == null)
        {
            dbcredit = Sqlite.open('data/credits.db');
        }
        return dbcredit;
    }
  
	//requesting credits
    public static function getCredits():ResultSet
    {
        return getInstanceTwo().request("select * from credits");
    }
	
	//connecting with the questions/answers/endings database
	public static function getIntancethree():Connection
	{
		if (dbQ1 == null)
        {
            dbQ1 = Sqlite.open('data/Q1.db');	
        }
         return dbQ1;
	}
	
	//lot of requests for certain questions and stuff
	public static function getQ1():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 3");
    }
	
	public static function getA1():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 1");
    }
	
	public static function getA2():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 2");
    }
	
	public static function getEnd():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 4");
    }
	
	public static function getEnd2():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 5");
    }

	public static function getEnd3():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 6");
    }
	
	public static function getQ2():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 7");
    }
	
    public static function getA3():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 8");
    }
	
	public static function getA4():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 9");
    }
	
	 public static function getEnd4():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 10");
    }
	
	public static function getQ3():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 11");
    }
	
	 public static function getA5():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 12");
    }
	
	public static function getA6():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 13");
    }
	
	public static function getEnd5():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 14");
    }
	
	public static function getVictory():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 15");
    }
	
	public static function getLate():ResultSet
    {
        return getIntancethree().request("select * from Q1 where ID = 16");
    }
}
