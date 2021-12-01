#pragma once
#include <vector>
#include "student.h"
#include "program.h"

using namespace std;
class Program_Inst: public Program{

    private:
        int year;
        //Agregation
        vector<Student*> students;
        // Admin needs to be able to acces Program Instance
        friend class Admin;
    
    public:
        Program_Inst(int year, string name, string code);
};