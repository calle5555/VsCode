#include <iostream>
#include "student.h"

Student::Student(int year1 = 0, int id1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1), year(year1), id(id1){

    courses = {};
}

void Student::Print_Courses(){

}

void Student::Print_info(){
    cout << year << "\n" << id  << "\n"  << name << "\n" << email << "\n" << phone << endl;
}