// Kommentar yay https://code.visualstudio.com/docs/languages/cpp
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char code[100];
    double points;
    int year;
    int period;
    int num_teachers;
    int num_student;
    struct Teacher* teachers;
    struct Student* students;
}Course;

typedef struct
{
    char name[50];
    char email[100];
    char phone[20];
    int year;
    int id;
    int num_courses;
    Course* courses;
}Student;

typedef struct
{
    char name[50];
    char email[100];
    char phone[20];
    int office_num;
    int num_courses;
    Course* courses;
}Teacher;

typedef struct
{
    int num_students;
    int num_courses;
    int num_teachers;
    Student* students;
    Course* courses;
    Teacher* teachers;
}Minibb;

Minibb *createbb()
{
    Minibb *minibb = malloc(sizeof(Minibb));
    if(minibb == 0)
    {
        return NULL;
    }

    minibb->num_courses = 0;
    minibb->num_students = 0;
    minibb->num_teachers = 0;
    minibb->students = NULL;
    minibb->teachers = NULL;
    minibb->courses = NULL;

    return minibb;
}

void add_to_bb(Minibb *minibb, Teacher teacher, Student *student, Course *course, int check)
{
    // Adding teacher
    if(check == 1)
    {
        if (minibb->num_teachers == 0) 
        {
             minibb->teachers = (Teacher*)malloc(sizeof(Teacher));
        }
        else 
        {
            minibb->teachers = (Teacher*)realloc(minibb->teachers, (minibb->num_teachers + 1) * sizeof(Teacher));
        }
        minibb->teachers[minibb->num_teachers] = teacher;
        minibb->num_teachers++;
    }

    // Adding student
    if(check == 2)
    {
        if (minibb->num_students == 0) 
            {
                minibb->students = (Student*)malloc(sizeof(Student));
            }
        else 
            {
                minibb->students = (Student*)realloc(minibb->students, (minibb->num_students + 1) * sizeof(Student));
            }
    }

    // Adding course
    if(check == 3)
    {
        if (minibb->num_courses == 0) 
        {
             minibb->courses = (Course*)malloc(sizeof(Course));
        }
        else 
        {
            minibb->courses = (Course*)realloc(minibb->courses, (minibb->num_courses + 1) * sizeof(Course));
        }
    }
}

Teacher *create_teacher(Minibb *minibb, char name[], char email[], char phone[], int office_num)
{
    Teacher* teacher = malloc(sizeof(Teacher));
    if(teacher == 0)
    {
        return NULL;
    }
    
    strcpy(teacher->name, name);
    strcpy(teacher->email, email);
    strcpy(teacher->phone, phone);
    teacher->office_num = office_num;
    teacher->num_courses = 0;
    teacher->courses = NULL;
    add_to_bb(minibb, teacher, NULL, NULL, 1);
    
    return teacher;
}

Student *create_student(Minibb *minibb, char name[], char email[], char phone[], int year, int id)
{
    Student* student = malloc(sizeof(Student));
    if(student == 0)
    {
        return NULL;
    }
    
    strcpy(student->name, name);
    strcpy(student->email, email);
    strcpy(student->phone, phone);
    student->year = year;
    student->id = id;
    student->num_courses = 0;
    student->courses = NULL;

    add_to_bb(minibb, NULL, student, NULL, 2);

    return student;
}



Course *create_course(Minibb *minibb, char name[], char code[], double points, int year, int period)
{
    Course* course = malloc(sizeof(Course));
    if(course == 0)
    {
        return NULL;
    }

    strcpy(course->name, name);
    strcpy(course->code, code);
    course->points = points;
    course->year = year;
    course->period = period;
    course->num_teachers = 0;
    course->num_student = 0;
    course->teachers = NULL;
    course->students = NULL;
    add_to_bb(minibb, NULL, NULL, course, 3);

    return course;
}



void enroll_student(Student *student, Course *course)
{

}

int main()
{
    Minibb *minibb = createbb();
    Course *course = create_course(minibb, "Objektorienterad prr", "78JM1", 7.5, 2021, 1);
    Student *student = create_student(minibb, "Jane doe", "Jane.doe@hotmail.com", "0724201211", 2021, 7889881);
    Teacher *teacher = create_teacher(minibb, "Martin Je", "Martin.je@oru.se", "0709999999", 1337);

    // Funktion för att ta bort använt minne
}

//Göra någon form av update bb funktion som man kör varje gång det ändras något
//Ex om en student läggs till i en kurs körs update bb samtidigt och uppdaterar med den nya infon 