#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"

class Student: public Person{
    private:
        int year;
        int id;
        //Aggregation
        vector<Course_Inst *> courses;

        // Admin needs to be able to acces Student
        friend class Admin;

    public:
        Student(int year, int id, string name, string email, string phone);

        // Prints the courses that the student takes
        void Print_Courses();

        // Prints student information
        void Print_Info();

        // Helper functions
        int Get_Id() const;
        string Get_Name() const;
};