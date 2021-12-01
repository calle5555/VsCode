#pragma once
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "program.h"
#include "course.h"
#include "program_inst.h"
#include "course_inst.h"

class Minibb;

class Admin: public Person{
    private:
        int office_num;

    public:

    Admin(int office_num, string name, string email, string phone);

    void Print_Info();

    void Add_Teacher(const Teacher& teacher, Minibb& minibb);

    void Add_Student(const Student& student, Minibb& minibb);

    void Add_Admin(const Admin& admin, Minibb& minibb);

    void Add_Course(const Course& course, Minibb& minibb);

    void Add_Program(const Program& program, Minibb& minibb);

    void Add_CourseInst(const Course_Inst& course_inst, Minibb& minibb);

    void Add_ProgInst(const Program_Inst& program_inst, Minibb& minibb);

    void Add_Course_Program(Course& course, Program& program);

    void Enroll_Student_Course(Student& student, Course_Inst& course_inst);

    void Assign_Teacher_Course(Teacher& teacher, Course_Inst& course_inst);

    void Enroll_Student_Program(Student& student, Program_Inst& program_inst);
};