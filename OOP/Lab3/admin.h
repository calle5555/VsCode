#pragma once
//<include "minibb.h"
#include "person.h"

class Admin: public Person{
    private:
        int office_num;

    public:

    Admin(int office_num, string name, string email, string phone);

    void Print_Info();

    //void Add_Teacher(Teacher& teacher, Minibb& minibb);

    //void Add_Student(Student& student, Minibb& minibb);

    vector<Admin> Add_Admin(Admin& admin, vector<Admin>* admins);

    void Add_Course();

    void Add_Program();

    void Add_CourseIns();

    void Add_ProgIns();

    void Enroll_Student_Course();

    void Assign_Teacher_Course();

    void Enroll_Student_Program();
};