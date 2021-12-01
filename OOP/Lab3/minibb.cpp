#include "minibb.h"

Minibb::Minibb(const Admin& admin){

    student_ids = {};
    programs = {};
    program_inst = {};
    courses = {};
    course_inst = {};
    students = {};
    teachers = {};
    // Adds an admin to the admin vector
    admins.push_back(admin);
}

