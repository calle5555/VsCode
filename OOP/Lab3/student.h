#pragma once
#include "person.h"

class Student: public Person{
    private:
        int year;
        int id;

    public:
        Student(int year, int id, string name, string email, string phone);
        void Print_Courses();
        void Print_info();
};