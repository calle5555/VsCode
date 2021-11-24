#include <iostream>
#include "student.h"
#include "teacher.h"
#include "admin.h"
#include "program.h"
#include "program_inst.h"
#include "course.h"
#include "course_inst.h"
#include "assessment.h"
#include "person.h"

using namespace std;
int main(int, char**) {
    cout << "Hello World!" << endl;

    Student calle(2020, 1337);

    calle.Print_info();
}
