#pragma once
#include "person.h"
#include "course.h"

using namespace std;
class Teacher: public Person{
    private:   
        int office_num;
        vector<Course *> courses;
    public:
        Teacher(int off_num, string name, string email, string phone);
        void Print_Courses();
        void Print_Info();
};