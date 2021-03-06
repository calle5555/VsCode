#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"
#include "admin.h"
#include "program.h"
#include "program_inst.h"
#include "course.h"
#include "course_inst.h"
#include "info_interface.h"

using namespace std;
class Minibb{

    public:
    // Creates vectors containing all information needed for the blackboard
    // Composition. If blackboard is destoryed all other objects are as well
    vector<Program> programs;
    vector<Program_Inst> program_inst;
    vector<Course> courses;
    vector<Course_Inst> course_inst;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Admin> admins;

    // Helper vector with all used student ID:s
    vector<int> student_ids;

    // Admin needs to be able to acces bb
    friend class Admin;

    // Blackboard needs an Admin to funcion
    Minibb(const Admin& admin);

    // Prints out all info of a person
    void Print_Info(Info_Interface& person);

    // Prints out the info for all students and teachers in a course instance
    void Print_Participants_Info(Course_Inst& course);

    // Overloaded functions to print out the name of either courses or course instances
    void Print_Courses(vector<Course *> courses);

    void Print_Courses(vector<Course_Inst *> courses);

};


