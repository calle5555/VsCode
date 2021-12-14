#include <iostream>
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

void Minibb::Print_Info(Info_Interface& person){
    cout << person.Info() << endl;
}

void Minibb::Print_Participants_Info(Course_Inst& course){

    cout << "Participant info:\nStudents:\n" << endl;

    for (Student* i: course.students){
        cout << i->Info() << endl;
    }

    cout << "Teachers:\n" << endl;

    for (Teacher* i: course.teachers){
        cout << i->Info() << endl;
    }

}

void Minibb::Print_Courses(vector<Course *> courses){
    for(Course *i: courses){
        cout << i->Get_Name() << endl;
    }
}

void Minibb::Print_Courses(vector<Course_Inst *> courses){
    for(Course_Inst *i: courses){
        cout << i->Get_Name() << endl;
    }
}