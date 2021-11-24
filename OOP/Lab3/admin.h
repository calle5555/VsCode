#pragma once

class Admin{
    private:
        int office_num;

    public:

    Admin(int o);

    void Add_Teacher();

    void Add_Student();

    void Add_Admin();

    void Add_Course();

    void Add_Program();

    void Add_CourseIns();

    void Add_ProgIns();

    void Enroll_Student_Course();

    void Assign_Teacher_Course();

    void Enroll_Student_Program();
};