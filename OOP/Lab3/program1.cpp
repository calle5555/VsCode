#include "program.h"

using namespace std;
Program::Program(string name1 = "", string code1 = ""):name(name1),code(code1){
    courses = {};
}

vector<Course *> Program::What_Courses(){
    return courses;
}