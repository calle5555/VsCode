#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"
#include "info_interface.h"
#include "what_courses_interface.h"



using namespace std;
class Teacher: public Person, public Info_Interface, public What_Courses_Interface<Course_Inst *>{
    private:   
        int office_num;
        //Agregation
        vector<Course_Inst *> courses;

        // Admin needs to be able to acces Teacher
        friend class Admin;
        

    public:
        Teacher(int off_num, string name, string email, string phone);

        // Returns a vector containing all courses that the teacher teaches
        vector<Course_Inst *> What_Courses();

        // Implements Info interface and prints teacher info 
        string Info();

        // Helper function
        string Get_Name() const;
};