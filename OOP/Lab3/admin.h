#pragma once
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "program.h"
#include "course.h"
#include "program_inst.h"
#include "course_inst.h"

// Forward declaration to avoid circual dependency
class Minibb;

class Admin: public Person{
    private:
        int office_num;

    public:

    Admin(int office_num, string name, string email, string phone);

    // Prints all admin information
    void Print_Info();

    // Takes a reference to a teacher and adds it to blackborad
    void Add_Teacher(const Teacher& teacher, Minibb& minibb);

    // Takes a reference to a student and adds it to blackborad 
    void Add_Student(const Student& student, Minibb& minibb);

    // Takes a reference to an Admin and adds it to blackborad 
    void Add_Admin(const Admin& admin, Minibb& minibb);

    // Takes a reference to a course and adds it to blackborad
    void Add_Course(const Course& course, Minibb& minibb);

    // Takes a reference to a program and adds it to blackborad
    void Add_Program(const Program& program, Minibb& minibb);

    // Takes a reference to a course instance and adds it to blackborad
    void Add_CourseInst(const Course_Inst& course_inst, Minibb& minibb);

    // Takes a reference to a program instance and adds it to blackborad
    void Add_ProgInst(const Program_Inst& program_inst, Minibb& minibb);

    // Adds a pointer to a course to the courses vector in program
    void Add_Course_Program(Course& course, Program& program);

    // Takes a reference to a student and a course instance and adds the student to the course instance
    void Enroll_Student_Course(Student& student, Course_Inst& course_inst);

    // Takes a reference to a teacher and a course instance and adds the teacher to the course instance
    void Assign_Teacher_Course(Teacher& teacher, Course_Inst& course_inst);

    // Takes a reference of a student and program instance and adds the student to the program instance
    void Enroll_Student_Program(Student& student, Program_Inst& program_inst);
};