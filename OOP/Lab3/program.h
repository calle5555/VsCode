#pragma once
#include <string>
#include <vector>
#include "course.h"

using namespace std;
class Program{
    private:
        string name;
        string code;
        vector<Course> courses;

    public:
        Program(string n, string c);
};
