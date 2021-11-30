#pragma once
//<include "minibb.h"
#include "person.h"
#include "student.h"
#include "teacher.h"

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

    void Add_Course();

    void Add_Program();

    void Add_CourseIns();

    void Add_ProgIns();

    void Enroll_Student_Course();

    void Assign_Teacher_Course();

    void Enroll_Student_Program();
};