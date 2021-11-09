// Kommentar yay https://code.visualstudio.com/docs/languages/cpp
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char name[50];
    char code[50];
    int points;
    int year;
    int period;
    struct Teachers* teacher;
    struct Students* student;

}Courses;

typedef struct
{
    char name[50];
    char email[50];
    int phone;
    int year;
    int id;
    struct Courses* courses;

}Students;

typedef struct
{

    char name[50];
    char email[50];
    int phone;
    int office_num;
    struct Courses* courses;

}Teachers;

typedef struct
{
    struct Students* student;
    struct Courses* course;
    struct Teachers* teacher;
}Minibb;

int main()
{
    printf("Hello World!");
}