#include<stdio.h>
#include<sqlite3.h>
#include<stdlib.h>

#define _DEBUG_

int main()
{
	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	rc = sqlite3_open("insert.db",&db);
	if(rc != SQLITE_OK){
		fprintf(stderr,"cannot open database %s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else printf("you have oopend a sqlite3 database named insert.db successfully!\n congratulation! have fun!\n");
	
	char *sql= "create table sensordata(ID INTEGER PRIMARY KEY,SensorID INTEGER,SiteNum INTEGER,name VARCHAR(12),Sensorparamter REAL);";
	//char *sql= "create table tbl1(one varchar(10),two smallint);";
	printf("%s\n",sql);
	sqlite3_exec(db,sql,0,0,&zErrMsg);
	//#ifdef _DEBUG_
	//	printf("%s\n",zErrMsg);
	//#endif
	sql="INSERT INTO \"sensordata\" VALUES(NULL,1,1,'200708081008',18.9);";
	//sql="INSERT INTO tbl1 VALUES('hello!',10);";
	printf("%s\n",sql);
	sqlite3_exec(db,sql,0,0,&zErrMsg);
	sql="INSERT INTO \"sensordata\" VALUES(NULL,1,1,'200708081010',16.4);";
	//sql="INSERT INTO tbl1 VALUES('goodbye',20);";
	printf("%s\n",sql);
	sqlite3_exec(db,sql,0,0,&zErrMsg);
	sqlite3_close(db);
	return 0;
}
	
