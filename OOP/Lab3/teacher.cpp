#include <iostream>
#include <sstream>
#include "teacher.h"

Teacher::Teacher(int off_num1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1), office_num(off_num1){

    courses = {};
} 

vector<Course_Inst *> Teacher::What_Courses(){
    return courses;
}

string Teacher::Info(){
    stringstream tmp;
    tmp << 
    "Name: "<< name << 
    "\nRole: Teacher" <<
    "\nPhone: " << phone << 
    "\nEmail: " << email << 
    "\nOffice Number: " << office_num <<
    endl;
    return tmp.str();
}

string Teacher::Get_Name() const{
    return name;
}