#pragma once
#include <string>

using namespace std;
class Person{
    protected:
        string name;
        string email;
        string phone;

    public:
        Person(string name, string email, string phone);
};