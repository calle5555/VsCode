#pragma once
#include <vector>
#include "student.h"
#include "program.h"

using namespace std;
class Program_Inst: public Program{

    private:
        int year;
        vector<Student*> students;
        friend class Admin;
    
    public:
        Program_Inst(int year, string name, string code);
};