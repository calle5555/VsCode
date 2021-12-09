
#include <iostream>
#include <sstream>
#include "student.h"

Student::Student(int year1 = 0, int id1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1), year(year1), id(id1){

    courses = {};
}

string Student::Info(){
    stringstream tmp;
    tmp << 
    "Name: "<< name << 
    "\nRole: Student" <<
    "\nPhone: " << phone << 
    "\nEmail: " << email << 
    "\nStarting year: " << year <<
    "\nStudent ID: " << id <<
    endl;
    return tmp.str();
}

 int Student::Get_Id() const{
    return id;
}

string Student::Get_Name() const{
    return name;
}

vector<Course_Inst *> Student::What_Courses(){
    return courses;
}