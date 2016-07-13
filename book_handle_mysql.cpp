#include "book_handle_mysql.h"

Handle_MySQL::Handle_MySQL() {}

Handle_MySQL::~Handle_MySQL() {}

//初始化数据;
int Handle_MySQL::Conn_MySQL(const char *host,const char * user,const char* password,const char * database, unsigned int port,const char * charset, string * Msg)
{
    if (mysql_init(&mysql) == NULL)                         //检查MySQL对象是否初始化成功;
    {
        string s("Initial mysql handle Error!");
        *Msg = s;
        return 1;
    }

    if (mysql_real_connect(&mysql, host, user, password, database, port, NULL, 0) == NULL)
    {
        string s("Failed to connect to database Error!");   //连接数据库，并检查是否连接成功;
        *Msg = s;
        return 1;
    }

    if (mysql_set_character_set(&mysql, charset) != 0)        //设置编码格式,否则在cmd下无法显示中文;
    {
        string s("Mysql_set_character_set Error!");
        *Msg = s;
        return 1;
    }
    return 0;
}

//查询数据;
string Handle_MySQL::SelectData( char * SQL, string * Msg)
{

        char sql[2048];
        sprintf(sql, SQL);
        if (mysql_query(&mysql, sql) != 0)                             //执行命令，并反馈执行结果;
        {
            string s("select ps_info Error");
            *Msg = s;
            return "";
        }

        MYSQL_RES *result = mysql_store_result(&mysql);                //将查询到的数据保存到result;
        if (result == NULL)
        {
            string s("select username Error!");
            *Msg = s;
            return "";
        }

        string str;
        MYSQL_FIELD *fd1;
        int j = mysql_num_fields(result);                             //获取列数;

        for (unsigned int i = 0; fd1 = mysql_fetch_field(result); i++)          //获取列名;
        {
            str += fd1->name;
            string s = fd1->name;
            for (unsigned int k = 0; k < 15 - s.size(); ++k) { str += " "; }
        }
        str += "\n";

        while (MYSQL_ROW sql_row = mysql_fetch_row(result))          //获取具体数据;
        {
            for (unsigned int i = 0; i < j; i++)
            {
                str += sql_row[i];
                string s = sql_row[i];                              //这里的格式是特殊设置,为输出美观;
                for (unsigned int k = 0; k < 15 - s.size(); ++k) { str += " "; }
            }
            str += '\n';
        }
        mysql_free_result(result);
        return str;
}

//插入数据;
int Handle_MySQL::InsertData(char * SQL, string * Msg)
{
    char sql[2048];
    sprintf(sql, SQL);
    if (mysql_query(&mysql, sql) != 0)
    {
        string s("Insert Data Error!");
        *Msg = s;
        return 1;
    }
    return 0;
}

//更新数据;
int Handle_MySQL::UpdateData(char * SQL, string * Msg)
{
    char sql[2048];
    sprintf(sql, SQL);
    if (mysql_query(&mysql, sql) != 0)
    {
        string s("Update Data Error!");
        *Msg = s;
        return 1;
    }
    return 0;
}

//删除数据;
int Handle_MySQL::DeleteData(char * SQL, string * Msg)
{
    char sql[2048];
    sprintf(sql, SQL);
    if (mysql_query(&mysql, sql) != 0)
    {
        string s("Delete Data Error!");
        *Msg = s;
        return 1;
    }
    return 0;
}

//关闭数据库连接;
void Handle_MySQL::Close_MySQL_Conn()
{
    mysql_close(&mysql);
}
