#include <iostream>
#include <vector>
#include "admin.h"
#include "minibb.h"

using namespace std;
Admin::Admin(int office_num1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1),office_num(office_num1){}

void Admin::Print_Info(){
    cout << name << "\n" << phone << "\n" << email << "\n" << office_num << endl;
}

void Admin::Add_Teacher(const Teacher& teacher, Minibb& minibb){

    minibb.teachers.push_back(teacher);
}

void Admin::Add_Student(const Student& student, Minibb& minibb){

    minibb.students.push_back(student);
}

void Admin::Add_Admin(const Admin& admin, Minibb& minibb){

    minibb.admins.push_back(admin);
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