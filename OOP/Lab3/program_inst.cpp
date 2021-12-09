#include "program_inst.h"

Program_Inst::Program_Inst(int year1 = 0, string name1 = "", string code1 = ""):
Program(name1,code1),year(year1){
    students = {};
}