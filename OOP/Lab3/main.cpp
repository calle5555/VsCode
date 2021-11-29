#include <iostream>
#include "minibb.h"

using namespace std;
int main(int, char**) {
    cout << "Hello World!" << endl;

    Minibb minibb;

    minibb.students.push_back(Student (2020, 1337,"pelle","hej@gmail.com","123456789"));


    minibb.students.at(0).Print_info();
}
