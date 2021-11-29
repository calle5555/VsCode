#include "program_inst.h"

Program_Inst::Program_Inst(string name1 = "", string code1 = "", int year1 = 0):
Program(name1,code1),year(year1){
    students = {};
}