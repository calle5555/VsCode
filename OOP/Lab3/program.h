#pragma once
#include <string>
#include <vector>
#include "course.h"

using namespace std;
class Program{
    protected:
        string name;
        string code;
        vector<Course> courses;

    public:
        Program(string name, string code);
};
