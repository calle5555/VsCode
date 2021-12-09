#pragma once
#include <string>
#include <vector>
#include "course.h"
#include "what_courses_interface.h"


using namespace std;
class Program: public What_Courses_Interface<Course *>{
    protected:
        string name;
        string code;
        //Agregation
        vector<Course*> courses;

        // Admin needs to be able to acces Program
        friend class Admin;

    public:
        Program(string name, string code);

        // Returns a vector containing all courses in a program
        vector<Course *> What_Courses();
};
