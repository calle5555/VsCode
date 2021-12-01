#include "minibb.h"

Minibb::Minibb(const Admin& admin){

    student_ids = {};
    programs = {};
    program_inst = {};
    courses = {};
    course_inst = {};
    students = {};
    teachers = {};
    admins.push_back(admin);
}

