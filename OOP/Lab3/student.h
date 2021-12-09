#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"
#include "info_interface.h"
#include "what_courses_interface.h"

class Student: public Person, public Info_Interface, public What_Courses_Interface<Course_Inst *>{
    private:
        int year;
        int id;
        //Aggregation
        vector<Course_Inst *> courses;

        // Admin and Minibb needs to be able to acces Student
        friend class Admin;
        

    public:
        Student(int year, int id, string name, string email, string phone);

        // Returns a vector containing all courses that the student takes
        vector<Course_Inst *> What_Courses();

        // Implements Info interface and prints student info 
        string Info();

        // Helper functions
        int Get_Id() const;
        string Get_Name() const;
};