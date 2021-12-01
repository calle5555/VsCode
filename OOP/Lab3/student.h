#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"

class Student: public Person{
    private:
        int year;
        int id;
        vector<Course_Inst *> courses;
        friend class Admin;

    public:
        Student(int year, int id, string name, string email, string phone);
        void Print_Courses();
        void Print_Info();

        // Helper functions
        int Get_Id() const;
        string Get_Name() const;
};