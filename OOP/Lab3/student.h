#pragma once
#include <vector>
#include "person.h"
#include "course.h"

class Student: public Person{
    private:
        int year;
        int id;
        vector<Course *> courses;
        

    public:
        Student(int year, int id, string name, string email, string phone);
        void Print_Courses();
        void Print_info();
};