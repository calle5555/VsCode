#include <vector>
#include <string>
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
}



