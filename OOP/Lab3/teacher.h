#pragma once
#include <vector>
#include "person.h"
#include "course_inst.h"

using namespace std;
class Teacher: public Person{
    private:   
        int office_num;
        vector<Course_Inst *> courses;
        friend class Admin;

    public:
        Teacher(int off_num, string name, string email, string phone);
        void Print_Courses();
        void Print_Info();

        // Helper function
        string Get_Name() const;
};