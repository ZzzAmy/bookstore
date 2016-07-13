#include "book_book_system.h"

//获取学生的学号和姓名;
void target_student(Student * stu)
{
    cout << "Please input your number and name:" << endl;
    cin >> stu->student_num >> stu->student_name;
}

//学生信息录入函数;
void Student::Input_stu_information(int input_order)
{
    if (1 == input_order)
    {
        char end_order;
        do
        {
            cout << "Please input your information in the order of number/name/class/age:" << endl;
            cin >> student_num >> student_name >> student_class >> student_age;

            cout << "Are you sure? Please input Y(y)/N(n):" << endl;
            cin >> end_order;
        } while (end_order == 'N' || end_order == 'n');
    }
}

//管理员信息录入函数;
void Administrator::Input_adm_information(int input_order)
{
    if (1 == input_order)
    {
        char end_order;
        do
        {
            cout << "Please input your information in the order of number/name/age:" << endl;
            cin >> administrator_num >> administrator_name >> administrator_age;

            cout << "Are you sure? Please input Y(y)/N(n):" << endl;
            cin >> end_order;
        } while (end_order == 'N' || end_order == 'n');
    }
}

//Student_格式装换获取SQL;
void Get_QSL(Student* stu, char *SQL)
{
    char s1[2048], s2[2048], s3[2048];
    strcpy(s1, (stu->student_num).c_str());
    strcpy(s2, (stu->student_name).c_str());
    strcpy(s3, (stu->student_class).c_str());
    sprintf(SQL, "insert into students values('%s','%s','%s',%d,'%s','%s','%s')", s1, s2, s3, stu->student_age, "", "", "123456");
}

//Administrtor_格式装换获取SQL;
void Get_QSL(Administrator* adm, char *SQL)
{
    char s1[2048], s2[2048];
    strcpy(s1, (adm->administrator_num).c_str());
    strcpy(s2, (adm->administrator_name).c_str());
    sprintf(SQL, "insert into administrators values('%s','%s',%d,'%s')", s1, s2, adm->administrator_age, "123546");
}

//Student_添加用户函数;
void Stu_management::Add_student(string *Msg, Handle_MySQL * vspdctomysql)
{
    char SQL[2048];
    Student* stu = new Student;
    stu->Input_stu_information(1);
    Get_QSL(stu, SQL);
    if (vspdctomysql->InsertData(SQL, Msg) == 0)
        cout << "succeeded to insert!" << endl;
    else
        cout << *Msg << endl;
    delete stu;
}

//学生信息排序函数（含输出);
void Stu_management::Information_sorting(int order, string *Msg, Handle_MySQL * vspdctomysql)
{
//    char * SQL;
//    switch (order)
//    {
//    case 1:SQL = "select number,name,class,age,borrowedbook1,borrowedbook2 from students order by number asc"; break;
//    case 2:SQL = "select number,name,class,age,borrowedbook1,borrowedbook2 from students order by number desc"; break;
//    case 3:SQL = "select number,name,class,age,borrowedbook1,borrowedbook2 from students order by name asc"; break;
//    case 4:SQL = "select number,name,class,age,borrowedbook1,borrowedbook2 from students order by name desc"; break;
//    default:cout << "Input Error! PLease input again!" << endl; return;
//    }
//    string str = vspdctomysql->SelectData(SQL, Msg);
//    if (str.size() > 0)
//    {
//        cout << str << endl;
//    }
//    else
//    {
//        cout << *Msg << endl;
//    }
}

//学生信息查询函数;
void Stu_management::Information_inquire(string *Msg, Handle_MySQL * vspdctomysql)
{
    //输入查找信息;
    string number, name;
    cout << "Please input student's number and name:" << endl;
    cin >> number >> name;
    //将信息转换为命令行;
    char s1[2048];
    strcpy(s1, number.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,class,age,borrowedbook1,borrowedbook2 from students where number = '%s'", s1);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() > 100)
    {
        cout << str << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//学生信息修改函数;
void Stu_management::Information_update(int order, string *Msg, Handle_MySQL *vspdctomysql)
{
    //输入基本信息;
    string number, password;
    cout << "Please input student's number and password:" << endl;
    cin >> number >> password;
    //将信息转换为命令行;
    char s1[2048], s2[2048];
    strcpy(s1, number.c_str());
    strcpy(s2, password.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,class,age from students where number='%s' and password='%s'", s1, s2);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() > 75)
    {
        string name, _class;
        char s3[2048], s4[2048], SQL[2048];
        int age;
        if (order == 1)
        {
            cout << "Please input your name:" << endl;
            cin >> name;
            strcpy(s3, name.c_str());
            sprintf(SQL, "update students set name='%s' where number='%s'", s3, s1);
        }
        else if (order == 2)
        {
            cout << "Please input your class:" << endl;
            cin >> _class;
            strcpy(s4, _class.c_str());
            sprintf(SQL, "update students set class='%s' where number='%s'", s4, s1);
        }
        else
        {
            cout << "Please input your age:" << endl;
            cin >> age;
            sprintf(SQL, "update students set age=%d where number='%s'", age, s1);
        }
        if (vspdctomysql->UpdateData(SQL, Msg) == 0)
            cout << "Succeeded to update!" << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//学生信息删除函数;
void Stu_management::Information_delete(string *Msg, Handle_MySQL *vspdctomysql)
{
    //输入基本信息;
    string number, password;
    cout << "Please input student's number and password:" << endl;
    cin >> number >> password;
    //将信息转换为命令行;
    char s1[2048], s2[2048];
    strcpy(s1, number.c_str());
    strcpy(s2, password.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,class,age from students where number='%s' and password='%s'", s1, s2);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() > 80)
    {
        sprintf(SQL, "delete from students where number='%s'", s1);
        if (vspdctomysql->DeleteData(SQL, Msg) == 0)
            cout << "Succeeded to delete!" << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//Administrator_添加用户;
void Adm_management::Add_administrator(string *Msg, Handle_MySQL * vspdctomysql)
{
    char SQL[2048];
    Administrator * adm = new Administrator;
    adm->Input_adm_information(1);
    Get_QSL(adm, SQL);
    if (vspdctomysql->InsertData(SQL, Msg) == 0)
        cout << "succeeded to insert!" << endl;
    else
        cout << *Msg << endl;
    delete adm;
}

//管理员信息排序函数(含输出);
void Adm_management::Information_sorting(int order, string *Msg, Handle_MySQL *vspdctomysql)
{
//    char * SQL;
//    switch (order)
//    {
//    case 1:SQL = "select number,name,age from administrators order by number asc"; break;
//    case 2:SQL = "select number,name,age from administrators order by number desc"; break;
//    case 3:SQL = "select number,name,age from administrators order by name asc"; break;
//    case 4:SQL = "select number,name,age from administrators order by name desc"; break;
//    default:cout << "Input Error! PLease input again!" << endl; return;
//    }
//    string str = vspdctomysql->SelectData(SQL, Msg);
//    if (str.size() > 0)
//    {
//        cout << str << endl;
//    }
//    else
//    {
//        cout << *Msg << endl;
//    }
}

//管理员信息查询函数;
void Adm_management::Information_inquire(string *Msg, Handle_MySQL * vspdctomysql)
{
    //输入查找信息;
    string number, name;
    cout << "Please input administrators number and name:" << endl;
    cin >> number >> name;
    //将信息转换为命令行;
    char s1[2048], s2[2048];
    strcpy(s1, number.c_str());
    strcpy(s2, name.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,age from administrators where number='%s' and name='%s'", s1, s2);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() >75)
    {
        cout << str << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//管理员信息修改函数;
void Adm_management::Information_update(int order, string *Msg, Handle_MySQL * vspdctomysql)
{
    //输入基本信息;
    string number, password;
    cout << "Please input administrators number and password:" << endl;
    cin >> number >> password;
    //将信息转换为命令行;
    char s1[2048], s2[2048];
    strcpy(s1, number.c_str());
    strcpy(s2, password.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,age from administrators where number='%s' and password='%s'", s1, s2);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() > 50)
    {
        string name;
        char s3[2048], SQL[2048];
        int age;
        if (order == 1)
        {
            cout << "Please input your name:" << endl;
            cin >> name;
            strcpy(s3, name.c_str());
            sprintf(SQL, "update administrators set name='%s' where number='%s'", s3, s1);
        }
        else
        {
            cout << "Please input your age:" << endl;
            cin >> age;
            sprintf(SQL, "update administrators set age=%d where number='%s'", age, s1);
        }
        if (vspdctomysql->UpdateData(SQL, Msg) == 0)
            cout << "Succeeded to update!" << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//管理员信息删除函数;
void Adm_management::Information_delete(string *Msg, Handle_MySQL * vspdctomysql)
{
    //输入基本信息;
    string number, password;
    cout << "Please input administrators number and password:" << endl;
    cin >> number >> password;
    //将信息转换为命令行;
    char s1[2048], s2[2048];
    strcpy(s1, number.c_str());
    strcpy(s2, password.c_str());
    char SQL[2048];
    sprintf(SQL, "select number,name,age from administrators where number='%s' and password='%s'", s1, s2);
    //从数据库获取信息并检查输入信息是否存在;
    string str = vspdctomysql->SelectData(SQL, Msg);
    if (str.size() > 50)
    {
        sprintf(SQL, "delete from administrators where number='%s'", s1);
        if (vspdctomysql->DeleteData(SQL, Msg) == 0)
            cout << "Succeeded to delete!" << endl;
    }
    else
    {
        cout << "The information you just input was not correct!" << endl;
        *Msg = "Error!";
    }
}

//密码设置函数;
void Password_management::set_password(int status, string *Msg, Handle_MySQL *vspdctomysql)
{
    string password1, password2;
    string number1, number2, str;
    int password_input = -1;
    //用户输入新密码;
    do
    {
        //第二次经过循环时，输出下面的提示信息;
        password_input++;
        if (password_input > 0)
        {
            cout << "The information you typed do not match! Please input again!" << endl;
        }
        cout << "Please input your number and new password:" << endl;
        cin >> number1 >> password1;
        cout << "Please input your number and new password again:" << endl;
        cin >> number2 >> password2;
        //检查number是否输入正确;
        char s[2048];
        strcpy(s, number1.c_str());
        char SQL[2048];
        if (status == 0)
        {
            sprintf(SQL, "select * from students where number='%s'", s);
            str = vspdctomysql->SelectData(SQL, Msg);
        }
        else
        {
            sprintf(SQL, "select * from administrators where number='%s'", s);
            str = vspdctomysql->SelectData(SQL, Msg);
        }
    } while (password1 != password2 || number1 != number2 || str.size()<80);
    //在数据库中设置新密码,当status==0时为学生，否则为管理员;
    if (password1 == password2 && number1 == number2)
    {
        if (status == 0)
        {
            char SQL[2048];
            char s1[2048], s2[2048];
            strcpy(s1, password1.c_str());
            strcpy(s2, number1.c_str());
            sprintf(SQL, "update students set password = '%s' where number ='%s'", s1, s2);
            if (vspdctomysql->UpdateData(SQL, Msg) == 0)
                cout << "Succeeded to update!" << endl;
        }
        else
        {
            char SQL[2048];
            char s1[2048], s2[2048];
            strcpy(s1, password1.c_str());
            strcpy(s2, number1.c_str());
            sprintf(SQL, "update administrators set password = '%s' where number ='%s'", s1, s2);
            if (vspdctomysql->UpdateData(SQL, Msg) == 0)
                cout << "Succeeded to update!" << endl;
        }
    }
}

//密码修改函数;
void Password_management::reset_password(int status, string *Msg, Handle_MySQL *vspdctomysql)
{
    int password_input = -1, old_password_input = 0;
    //从数据库中获取旧密码并校验;
    do
    {
        //第二次经过循环时，输出下面的提示信息;
        password_input++;
        if (password_input > 0)
        {
            cout << "The password you typed do not match! Please input again!" << endl;
        }
        //输入旧密码，从数据库获取旧密码，然后校对;
        char SQL[2048];
        char s3[2048], s4[2048];
        string number, old_password, old_password1 = "password       \n";
        cout << "Please input your number and old password:" << endl;
        cin >> number >> old_password;
        strcpy(s3, number.c_str());
        strcpy(s4, old_password.c_str());
        if (status == 0)//status==0时为学生，否则为管理员;
        {
            sprintf(SQL, "select password from students where number ='%s'", s3);
        }
        else
        {
            sprintf(SQL, "select password from administrators where number ='%s'", s3);
        }
        string str = vspdctomysql->SelectData(SQL, Msg);
        //此处是因为从数据库中获取的数据有列名和空格，应该额外补上;
        old_password1 = old_password1 + old_password + "         \n";
        old_password_input = (old_password1 == str);
    } while (!old_password_input);
    //重设新密码;
    if (old_password_input)
    {
        set_password(status, Msg, vspdctomysql);
    }
}

//密码找回函数;
void Password_management::seek_password(int status, string *Msg, Handle_MySQL *vspdctomysql)
{
    string number, name;
    int age = 0, find_password = 0, information_input = -1;
    do
    {
        //当第二次进入循环时，输出下面的提示信息;
        information_input++;
        if (information_input > 0)
        {
            cout << "The information you just input was not correct! Please input again!" << endl;
        }
        //用户输入信息;
        cout << "Please input your number/name/age in order:" << endl;
        cin >> number >> name >> age;
        char s1[2048], s2[2048];
        strcpy(s1, number.c_str());
        strcpy(s2, name.c_str());
        char SQL[2048];
        //判断身份,校对信息,status==0则为学生，status==1则为管理员;
        if (status == 0)
            sprintf(SQL, "select password from students where number='%s' and name='%s' and age=%d", s1, s2, age);
        else
            sprintf(SQL, "select password from administrators where number='%s' and name='%s' and age=%d", s1, s2, age);
        string str = vspdctomysql->SelectData(SQL, Msg);
        //输出找回的密码;
        if (str.size() > 20)
        {
            cout << str;
            find_password = 1;
        }
    } while (!find_password);
}
