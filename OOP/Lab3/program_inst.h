#pragma once
#include <vector>
#include "student.h"

using namespace std;
class Program_Inst{

    private:
        int year;
        vector<Student> students;
    
    public:
        Program_Inst(int y);
};