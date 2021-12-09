#pragma once
#include <vector>
#include "course.h"

using namespace std;

// Using a template interface to let both courses and course instances through the function
template<class T>
class What_Courses_Interface{
    public:
        virtual vector<T> What_Courses() = 0;

};