cmake_minimum_required(VERSION 3.0.0)
project(OOP VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(
OOP OOP/Lab3/main.cpp 
OOP/Lab3/admin.cpp 
OOP/Lab3/assessment.cpp 
OOP/Lab3/course_inst.cpp 
OOP/Lab3/course.cpp 
OOP/Lab3/minibb.cpp 
OOP/Lab3/person.cpp 
OOP/Lab3/program_inst.cpp 
OOP/Lab3/program1.cpp 
OOP/Lab3/student.cpp 
OOP/Lab3/teacher.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
