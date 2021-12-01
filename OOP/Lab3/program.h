#pragma once
#include <string>
#include <vector>
#include "course.h"

using namespace std;
class Program{
    protected:
        string name;
        string code;
        //Agregation
        vector<Course*> courses;

        // Admin needs to be able to acces Program
        friend class Admin;

    public:
        Program(string name, string code);

};
