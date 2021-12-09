#pragma once
#include <vector>
#include <string>
#include "course.h"
#include "assessment.h"

// Forward declaration to avoid circual dependency
class Student;
class Teacher;

using namespace std;
class Course_Inst: public Course{

    private:
        int year;
        int period;
        // A list of pointers to students and teachers in blackborad (Aggregation)
        // If course_inst is destroyed the student and teachers will remain
        vector<Student*> students;
        vector<Teacher*> teachers;
        vector<Assessment> assessments;
        friend class Admin;
        friend class Minibb;

    public:

        Course_Inst(int year, int period, string name, string code, double points);

        // Prints all participants of a course
        void Print_Participants();

        // Helper function
        string Get_Name();
};