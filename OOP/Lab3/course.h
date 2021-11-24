#pragma once
#include <string>

using namespace std;
class Course{

    private:
        string name;
        string code;
        double points;

    public:
        Course(string n, string c, double p);

        void Course_Info();
};