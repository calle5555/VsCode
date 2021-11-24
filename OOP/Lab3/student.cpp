#include <iostream>
#include "student.h"

Student::Student(int y = 0, int i = 0):year(y), id(i){}

void Student::Print_Courses(){

}

void Student::Print_info(){
    std::cout << year << id << std::endl;
}