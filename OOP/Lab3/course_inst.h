#pragma once
#include <vector>
#include <string>
#include "student.h"
#include "teacher.h"
#include "assessment.h"
#include "course.h"

using namespace std;
class Course_Inst: public Course{

    private:
        int year;
        int period;
        vector<Student> students;
        vector<Teacher> teachers;
        vector<Assessment> assessments;

    public:

        Course_Inst(int year, int period, string name, string code, double points);

        void Print_Participants();
};