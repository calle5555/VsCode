#include <iostream>
#include "student.h"

Student::Student(int year1 = 0, int id1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1), year(year1), id(id1){

    courses = {};
}

void Student::Print_Courses(){

    cout << "Courses that " << name << " takes" << endl;
    // Prints all the courses
    for(Course_Inst* i: courses){
        cout << i->Get_Name() << endl; 
    }
}

void Student::Print_Info(){
    cout << "Info:" << "\n" << year << "\n" << id  << "\n"  << name << "\n" << email << "\n" << phone << endl;
}

 int Student::Get_Id() const{
    return id;
}

string Student::Get_Name() const{
    return name;
}