#include <iostream>
#include "teacher.h"

Teacher::Teacher(int off_num1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1), office_num(off_num1){

    courses = {};
}

void Teacher::Print_Courses(){

    cout << "Courses that " << name << " teaches" << endl;
    for(Course_Inst* i: courses){
        cout << i->Get_Name() << endl; 
    }
}

void Teacher::Print_Info(){
    cout << "Info:" << "\n" << name << "\n" << phone << "\n" << email << "\n" << office_num << endl;
}

string Teacher::Get_Name() const{
    return name;
}