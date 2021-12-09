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

        // Prints the course information
        void Print_Info();

        // Helper function
        string Get_Name() const;
};