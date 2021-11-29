#pragma once
#include "person.h"

class Teacher: public Person{
    private:   
        int office_num;

    public:
        Teacher(int off_num, string name, string email, string phone);
        void Print_Courses();
        void Print_Info();
};