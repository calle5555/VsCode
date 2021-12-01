#include <iostream>
#include "minibb.h"

using namespace std;
int main(int, char**) {

    // Creates a mini blackboard and adds admin "Adam"
    Minibb minibb(Admin (2043, "Adam", "admin@oru.se", "1234663"));

    minibb.admins.at(0).Add_Student(Student (2020, 1, "Calle", "student@oru.se", "1234"), minibb);
    minibb.admins.at(0).Add_Student(Student (2020, 2, "Pelle", "student@oru.se", "12345"), minibb);
    minibb.admins.at(0).Add_Student(Student (2020, 3, "Dalle", "student@oru.se", "123456"), minibb);
    minibb.admins.at(0).Add_Student(Student (2020, 4, "Bralle", "student@oru.se", "123457"), minibb);
    minibb.admins.at(0).Add_Student(Student (2020, 5, "Ralle", "student@oru.se", "123458"), minibb);
    
    minibb.admins.at(0).Add_Teacher(Teacher (1337, "Andreas Backwall", "teacher@oru.se", "986754"), minibb);
    minibb.admins.at(0).Add_Teacher(Teacher (1338, "Farhang Nemati", "teacher@oru.se", "9867543"), minibb);
    minibb.admins.at(0).Add_Teacher(Teacher (1339, "Dag Stranneby", "teacher@oru.se", "98675432"), minibb);
    minibb.admins.at(0).Add_Teacher(Teacher (1340, "Magnus oberg", "teacher@oru.se", "986754321"), minibb);

    minibb.admins.at(0).Add_Course(Course ("OOP","DT506G",7.5), minibb);
    minibb.admins.at(0).Add_Course(Course ("Ellara","FY502G",4.5), minibb);
    minibb.admins.at(0).Add_Course(Course ("Flervariabelanalys for civilingenjorer","MA505G",7.5), minibb);
    minibb.admins.at(0).Add_Course(Course ("Våg- och materiefysik for civilingenjorer", "FY501G",6), minibb);

    minibb.admins.at(0).Add_Program(Program ("Civilingenjor Data","NICE123"), minibb);
    minibb.admins.at(0).Add_Program(Program ("Hogskoleingenjor Data","INTENICE123"), minibb);
    minibb.admins.at(0).Add_Program(Program ("Civilingenjor IndEk","S0B4D"), minibb);

    minibb.admins.at(0).Add_CourseInst(Course_Inst (2020,1,"OOP","DT506G",7.5), minibb);
    minibb.admins.at(0).Add_CourseInst(Course_Inst (2020,2,"Ellara","FY502G",4.5), minibb);
    minibb.admins.at(0).Add_CourseInst(Course_Inst (2018,2,"OOP","DT506G",7.5), minibb);
    minibb.admins.at(0).Add_CourseInst(Course_Inst (2021,1,"Flervariabelanalys for civilingenjorer","MA505G",7.5), minibb);
    minibb.admins.at(0).Add_CourseInst(Course_Inst (2020,1,"Våg- och materiefysik for civilingenjorer", "FY501G",6), minibb);

    minibb.admins.at(0).Add_ProgInst(Program_Inst (2020, "Civilingenjor Data","NICE123"), minibb);
    minibb.admins.at(0).Add_ProgInst(Program_Inst (2025, "Hogskoleingenjor Data","INTENICE123"), minibb);
    minibb.admins.at(0).Add_ProgInst(Program_Inst (1993, "Civilingenjor IndEk","S0B4D"), minibb);

    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(0), minibb.programs.at(0));
    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(0), minibb.programs.at(1));
    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(1), minibb.programs.at(2));
    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(1), minibb.programs.at(1));
    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(2), minibb.programs.at(0));
    minibb.admins.at(0).Add_Course_Program(minibb.courses.at(3), minibb.programs.at(2));

    minibb.admins.at(0).Enroll_Student_Program(minibb.students.at(0), minibb.program_inst.at(0));
    minibb.admins.at(0).Enroll_Student_Program(minibb.students.at(1), minibb.program_inst.at(0));
    minibb.admins.at(0).Enroll_Student_Program(minibb.students.at(2), minibb.program_inst.at(1));
    minibb.admins.at(0).Enroll_Student_Program(minibb.students.at(3), minibb.program_inst.at(2));
    minibb.admins.at(0).Enroll_Student_Program(minibb.students.at(4), minibb.program_inst.at(2));

    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(0),minibb.course_inst.at(0));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(1),minibb.course_inst.at(2));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(2),minibb.course_inst.at(0));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(2),minibb.course_inst.at(1));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(3),minibb.course_inst.at(3));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(3),minibb.course_inst.at(1));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(4),minibb.course_inst.at(3));
    minibb.admins.at(0).Enroll_Student_Course(minibb.students.at(4),minibb.course_inst.at(1));

    minibb.admins.at(0).Assign_Teacher_Course(minibb.teachers.at(0),minibb.course_inst.at(3));
    minibb.admins.at(0).Assign_Teacher_Course(minibb.teachers.at(1),minibb.course_inst.at(0));
    minibb.admins.at(0).Assign_Teacher_Course(minibb.teachers.at(2),minibb.course_inst.at(1));
    minibb.admins.at(0).Assign_Teacher_Course(minibb.teachers.at(3),minibb.course_inst.at(4));
    minibb.admins.at(0).Assign_Teacher_Course(minibb.teachers.at(1),minibb.course_inst.at(2));

    //Testing all functions to see if they work

    cout << "Testing student " << minibb.students.at(0).Get_Name() << "\n" << endl;
    minibb.students.at(0).Print_Info();
    minibb.students.at(0).Print_Courses();
    cout << endl;

    cout << "Testing student " << minibb.students.at(2).Get_Name() << "\n" << endl;
    minibb.students.at(2).Print_Info();
    minibb.students.at(2).Print_Courses();
    cout << endl;

    cout << "Testing student " << minibb.students.at(4).Get_Name() << "\n" << endl;
    minibb.students.at(4).Print_Info();
    minibb.students.at(4).Print_Courses();
    cout << endl;

    cout << "Testing teacher " << minibb.teachers.at(1).Get_Name() << "\n" << endl;
    minibb.teachers.at(1).Print_Info();
    minibb.teachers.at(1).Print_Courses();
    cout << endl;

    cout << "Testing teacher " << minibb.teachers.at(2).Get_Name() << "\n" << endl;
    minibb.teachers.at(2).Print_Info();
    minibb.teachers.at(2).Print_Courses();
    cout << endl;

    cout << "Testing course instance " << minibb.course_inst.at(1).Get_Name() << "\n" << endl;
    minibb.course_inst.at(1).Print_Participants();
    cout << endl;

    cout << "Testing course instance " << minibb.course_inst.at(2).Get_Name() << "\n" << endl;
    minibb.course_inst.at(2).Print_Participants();
    cout << endl;

    cout << "Testing course " << minibb.courses.at(0).Get_Name() << "\n" << endl;
    minibb.courses.at(0).Print_Info();
    cout << endl;
}
