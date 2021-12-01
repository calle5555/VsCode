#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"

using namespace std;
class Teacher: public Person{
    private:   
        int office_num;
        //Agregation
        vector<Course_Inst *> courses;

        // Admin needs to be able to acces Teacher
        friend class Admin;

    public:
        Teacher(int off_num, string name, string email, string phone);

        // Prints the courses a teacher teaches
        void Print_Courses();

        // Prints teacher info
        void Print_Info();

        // Helper function
        string Get_Name() const;
};