#include <iostream>
#include <vector>
#include "admin.h"
#include "minibb.h"

using namespace std;
Admin::Admin(int office_num1 = 0, string name1 = "", string email1 = "", string phone1 = ""):
Person(name1, email1, phone1),office_num(office_num1){}

void Admin::Print_Info(){
    cout << name << "\n" << phone << "\n" << email << "\n" << office_num << endl;
}

void Admin::Add_Teacher(const Teacher& teacher, Minibb& minibb){

    minibb.teachers.push_back(teacher);
}

void Admin::Add_Student(const Student& student, Minibb& minibb){
    
    int tmp = 0;
    int id = student.Get_Id();
    // Checks that the student ID is unique
    for(int i: minibb.student_ids)
    {
        if(i == id){
            tmp = 1;
            cout << "non-unique id" << endl;
            break; 
        }
    } 
    // Adds the new student if the student ID is unique
    if(tmp == 0)
    {
        minibb.student_ids.push_back(id);
        minibb.students.push_back(student);
    }
}

void Admin::Add_Admin(const Admin& admin, Minibb& minibb){

    minibb.admins.push_back(admin);
}

void Admin::Add_Course(const Course& course, Minibb& minibb){

    minibb.courses.push_back(course);
}

void Admin::Add_Program(const Program& program, Minibb& minibb){

    minibb.programs.push_back(program);
}

void Admin::Add_CourseInst(const Course_Inst& course_inst, Minibb& minibb){

    minibb.course_inst.push_back(course_inst);
}

void Admin::Add_ProgInst(const Program_Inst& program_inst, Minibb& minibb){

    minibb.program_inst.push_back(program_inst);
}
 
 void Admin::Add_Course_Program(Course& course, Program& program){

    program.courses.push_back(&course);
 }

void Admin::Enroll_Student_Course(Student& student, Course_Inst& course_inst){

    course_inst.students.push_back(&student);
    student.courses.push_back(&course_inst);
}

void Admin::Assign_Teacher_Course(Teacher& teacher, Course_Inst& course_inst){

    course_inst.teachers.push_back(&teacher);
    teacher.courses.push_back(&course_inst);
}

void Admin::Enroll_Student_Program(Student& student, Program_Inst& program_inst){

    program_inst.students.push_back(&student);
}