#include <iostream>
#include "admin.h"
#include <vector>

using namespace std;
Admin::Admin(int office_num1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1),office_num(office_num1){}

void Admin::Print_Info(){
    cout << name << "\n" << phone << "\n" << email << "\n" << office_num << endl;
}
/*
void Admin::Add_Teacher(Teacher& teacher, Minibb& minibb){

    minibb.teachers.push_back(teacher);
}

void Admin::Add_Student(Student& student, Minibb& minibb){

    minibb.students.push_back(student);
}*/

vector<Admin> Admin::Add_Admin(Admin& admin, vector<Admin> admins){

    admins.push_back(admin);
    return admins;
}

void Admin::Add_Course(){

}

void Admin::Add_Program(){

}

void Admin::Add_CourseIns(){

}

void Admin::Add_ProgIns(){

}

void Admin::Enroll_Student_Course(){

}

void Admin::Assign_Teacher_Course(){

}

void Admin::Enroll_Student_Program(){

}