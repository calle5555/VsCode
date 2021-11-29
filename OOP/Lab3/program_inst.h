#pragma once
#include <vector>
#include "student.h"
#include "program.h"

using namespace std;
class Program_Inst: public Program{

    private:
        int year;
        vector<Student> students;
    
    public:
        Program_Inst(string name, string code, int year);
};