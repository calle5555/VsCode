#pragma once
#include <string>

using namespace std;
class Course{

    protected:
        string name;
        string code;
        double points;

    public:
        Course(string name, string code, double points);

        void Course_Info();
};