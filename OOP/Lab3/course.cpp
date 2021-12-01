#include <string>
#include <iostream>
#include "course.h"
#include "student.h"
#include "teacher.h"

using namespace std;

Course::Course(string name1 = "", string code1 = "", double points1 = 0):
name(name1),code(code1),points(points1){}

void Course::Print_Info(){

    cout << name << "\n" << code << "\n" << points << endl;
}

string Course::Get_Name() const{
    return name;
}
