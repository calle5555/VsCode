#pragma once
#include <string>

using namespace std;
class Person{
    //Protected for inheritance
    protected:
        string name;
        string email;
        string phone;

    public:
        Person(string name, string email, string phone);

};