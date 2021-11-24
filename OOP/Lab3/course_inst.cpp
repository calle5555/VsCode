#include <vector>
#include "course_inst.h"

using namespace std;
void Course_Inst::Print_Participants(){
}

Course_Inst::Course_Inst(int y = 0, int p = 0):year(y),period(p){

    students = {};
    teachers = {};
    assessments = {};
}

