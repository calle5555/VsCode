#pragma once
#include <vector>
#include <string>
#include "assessment.h"
#include "course.h"

class Student;
class Teacher;

using namespace std;
class Course_Inst: public Course{

    private:
        int year;
        int period;
        vector<Student*> students;
        vector<Teacher*> teachers;
        vector<Assessment> assessments;
        friend class Admin;

    public:

        Course_Inst(int year, int period, string name, string code, double points);

        void Print_Participants();

        string Get_Name();
};