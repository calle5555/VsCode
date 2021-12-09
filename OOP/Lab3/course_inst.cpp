#include <vector>
#include <string>
#include <iostream>
#include "student.h"
#include "teacher.h"
#include "course_inst.h"

using namespace std;

Course_Inst::Course_Inst(
int year1 = 0, int period1 = 0, string name1 = "", 
string code1 = "", double points1 = 0): 
Course(name1, code1, points1), year(year1), period(period1){
    
    students = {};
    teachers = {};
    assessments = {};
}

void Course_Inst::Print_Participants(){

    cout << "Students: \n" << endl;
    for(Student* i: students){
        cout << i->Get_Name() << endl;
    }

    cout << "\nTeachers: \n" << endl;
    for(Teacher* i: teachers){
        cout << i->Get_Name() << endl;
    }
}

string Course_Inst::Get_Name(){
    return name;
}


