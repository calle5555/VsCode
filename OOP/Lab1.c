// Kommentar yay https://code.visualstudio.com/docs/languages/cpp
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char code[15];
    double points;
    int year;
    int period;
    int num_teachers;
    int num_students;
    struct teacher* teachers;
    struct student* students;
}Course;

typedef struct student
{
    char name[50];
    char email[100];
    char phone[20];
    int year;
    int id;
    int num_courses;
    Course* courses;
}Student;

typedef struct teacher
{
    char name[50];
    char email[100];
    char phone[20];
    int office_num;
    int num_courses;
    Course* courses;
}Teacher;

void add_info_student(Student *student, char name[], char email[], char phone[], int year, int id){
    strcpy(student->name, name);
    strcpy(student->email, email);
    strcpy(student->phone, phone);
    student->year = year;
    student->id = id;
}

void add_info_teacher(Teacher *teacher, char name[], char email[], char phone[], int office_num){
    strcpy(teacher->name, name);
    strcpy(teacher->email, email);
    strcpy(teacher->phone, phone);
    teacher->office_num = office_num;
}

void add_info_course(Course *course, char name[], char code[], double points, int year, int period){
    strcpy(course->name, name);
    strcpy(course->code, code);
    course->points = points;
    course->year = year;
}

void enroll_student(Student *student, Course *course)
{
    if (student->num_courses == 0) {
		student->courses = (Course*)malloc(sizeof(Course));
	}
	else {
		student->courses = (Course*)realloc(student->courses, (student->num_courses + 1) * sizeof(Course));
	}

	student->courses[student->num_courses].year = course->year;
    student->courses[student->num_courses].points = course->points;
    student->courses[student->num_courses].period = course->period;
    student->courses[student->num_courses].num_teachers = course->num_teachers;
    student->courses[student->num_courses].num_students = course->num_students;
    strcpy(student->courses[student->num_courses].name, course->name);
    strcpy(student->courses[student->num_courses].code, course->code);
	student->num_courses++;

    if (course->num_students == 0) {
		course->students = (Student*)malloc(sizeof(Student));
	}
	else {
		course->students = (Student*)realloc(course->students, (course->num_students + 1) * sizeof(Student));
	}
    strcpy(course->students[course->num_students].name, student->name);
    strcpy(course->students[course->num_students].email, student->email);
    strcpy(course->students[course->num_students].phone, student->phone);
    course->students[course->num_students].year = student->year;
    course->students[course->num_students].id = student->id;
    course->students[course->num_students].num_courses = student->num_courses;
    course->num_students++;
}

void assign_teacher(Teacher *teacher, Course *course){

    if (teacher->num_courses == 0) {
		teacher->courses = (Course*)malloc(sizeof(Course));
	}
	else {
		teacher->courses = (Course*)realloc(teacher->courses, (teacher->num_courses + 1) * sizeof(Course));
	}

	teacher->courses[teacher->num_courses].year = course->year;
    teacher->courses[teacher->num_courses].points = course->points;
    teacher->courses[teacher->num_courses].period = course->period;
    teacher->courses[teacher->num_courses].num_teachers = course->num_teachers;
    teacher->courses[teacher->num_courses].num_students = course->num_students;
    strcpy(teacher->courses[teacher->num_courses].name, course->name);
    strcpy(teacher->courses[teacher->num_courses].code, course->code);
	teacher->num_courses++;
    
    if (course->num_teachers == 0) {
		course->teachers = (Teacher*)malloc(sizeof(Teacher));
	}
	else {
		course->teachers = (Teacher*)realloc(course->teachers, (course->num_teachers + 1) * sizeof(Teacher));
    }

    strcpy(course->teachers[course->num_teachers].name, teacher->name);
    strcpy(course->teachers[course->num_teachers].email, teacher->email);
    strcpy(course->teachers[course->num_teachers].phone, teacher->phone);
    course->teachers[course->num_teachers].office_num = teacher->office_num;
    course->teachers[course->num_teachers].num_courses = teacher->num_courses;
    course->num_teachers++;
}

void student_courses(Student *student){
    for(int i = 0; i < student->num_courses; i++){
        printf("%s\n", student->courses[i]);
    }
}

void student_info(Student *student){
    printf("%s\n", student->name);
    printf("%s\n", student->email);
    printf("%s\n", student->phone);
    printf("%d\n", student->id);
    printf("%d\n", student->year);

}

void teacher_courses(Teacher *teacher){
    for(int i = 0; i < teacher->num_courses; i++){
        printf("%s\n", teacher->courses[i]);
    }
}

void teacher_info(Teacher *teacher){
    printf("%s\n", teacher->name);
    printf("%s\n", teacher->email);
    printf("%s\n", teacher->phone);
    printf("%d\n", teacher->office_num);
}

void course_info(Course *course){
    printf("%s\n", course->name);
    printf("%s\n", course->code);
    printf("%d\n", course->points);
}

void participants(Course *course){

    for(int i = 0; i < course->num_teachers; i++){
        printf("%s\n",course->teachers[i].name);
    }
    for(int i = 0; i < course->num_students; i++){
        printf("%s\n",course->students[i].name);
    }

}

int main()
{
    int num_courses = 3;
    int num_people = 5;
    Course *courses = malloc(num_courses* sizeof(Course));
    Teacher *teachers = malloc(num_people* sizeof(Teacher));
    Student *students = malloc(num_people* sizeof(Student));

    for(int i = 0; i<num_people; i++){
        if(i < num_courses){
            courses[i].students = NULL;
            courses[i].teachers = NULL;
            courses[i].num_students = 0;
            courses[i].num_teachers = 0;
        }
        students[i].courses = NULL;
        teachers[i].courses = NULL;
        students[i].num_courses = 0;
        teachers[i].num_courses = 0;
    }

    add_info_course(&courses[0],"Objektorienterad prr", "78JM1", 7.5, 2021, 1);
    add_info_course(&courses[1],"Imperativ prr", "893M1", 7.5, 2020, 1);
    add_info_course(&courses[2],"Algoritmer", "7909M1", 7.5, 2024, 2);

    add_info_student(&students[0],"Jane doe", "Jane.doe@hotmail.com", "0724201211", 2021, 1111111);
    add_info_student(&students[1],"Jane dough", "Jane.dough@hotmail.com", "0721111111", 2021, 2222222);
    add_info_student(&students[2],"Jane though", "Jane.though@hotmail.com", "0722222222", 2021, 3333333);
    add_info_student(&students[3],"Jane this", "Jane.this@hotmail.com", "0723333333", 2021, 4444444);
    add_info_student(&students[4],"Jane that", "Jane.that@hotmail.com", "0724444444", 2021, 5555555);

    add_info_teacher(&teachers[0],"Martin Je", "Martin.je@oru.se", "0709999999", 1337);
    add_info_teacher(&teachers[1],"Martin Le", "Martin.Le@oru.se", "0708888888", 1338);
    add_info_teacher(&teachers[2],"Martin Se", "Martin.Se@oru.se", "0707777777", 1339);
    add_info_teacher(&teachers[3],"Martin Ge", "Martin.Ge@oru.se", "0706666666", 1340);
    add_info_teacher(&teachers[4],"Martin Be", "Martin.Be@oru.se", "0705555555", 1341);

    enroll_student(&students[1], &courses[0]);
    enroll_student(&students[2], &courses[0]);
    enroll_student(&students[2], &courses[1]);

    assign_teacher(&teachers[1],&courses[0]);
    assign_teacher(&teachers[2],&courses[0]);
    assign_teacher(&teachers[2],&courses[1]);

    //printf("%s\n %s\n", teachers[1].courses[0].name, courses[0].teachers[0].name);
    //printf("%s\n %s\n", teachers[2].courses[0].name, courses[0].teachers[1].name);
    //printf("%s\n %s\n", teachers[2].courses[1].name, courses[1].teachers[0].name);

    //student_courses(&students[2]);
    teacher_courses(&teachers[2]);
    teacher_info(&teachers[2]);

    course_info(&courses[0]);
    participants(&courses[0]);


    // Funktion för att ta bort använt minne
}

//Göra någon form av update bb funktion som man kör varje gång det ändras något
//Ex om en student läggs till i en kurs körs update bb samtidigt och uppdaterar med den nya infon 
