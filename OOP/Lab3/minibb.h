#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"
#include "admin.h"
#include "program.h"
#include "program_inst.h"
#include "course.h"
#include "course_inst.h"

using namespace std;
class Minibb{

    public:
    vector<Program> programs;
    vector<Program_Inst> progins;
    vector<Course> courses;
    vector<Course_Inst> courseins;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Admin> admins;
    friend class Admin;

    Minibb(const Admin& admin);

};


