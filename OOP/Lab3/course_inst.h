#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"
#include "assessment.h"

using namespace std;
class Course_Inst{

    private:
        int year;
        int period;
        vector<Student> students;
        vector<Teacher> teachers;
        vector<Assessment> assessments;

    public:

        Course_Inst(int y, int p);

        void Print_Participants();
};