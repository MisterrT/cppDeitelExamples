#include <iostream>
#include "gradeBook_implementation/GradeBook1.h"
using namespace std;

int main(){
    int grades[GradeBook::numOfStudents] = {87,68,94,100,83,78,85,91,76,87};

    int grades2[GradeBook::numOfStudents][GradeBook::numOfTests] = { {87,96,70},
                                                                     {68,87,90}, 
                                                                     {94,100,90}, 
                                                                     {100,81,82},
                                                                     {83,65,85},
                                                                     {78,87,65},
                                                                     {85,75,83},
                                                                     {91,94,100},
                                                                     {76,72,84},
                                                                     {87,93,73} };

    GradeBook gradeBook1("CS101 Introduction to Programming in C++", grades);
    GradeBook gradeBook2("CS102 C++ Data Structures", grades2);

    cout << "Initial gradeBook1 name: " << gradeBook1.getCourseName() << endl;
    //cout << "Initial gradeBook2 name: " << gradeBook2.getCourseName() << endl;


    
    gradeBook1.setCourseName("Introduction to C++");

    cout << "New gradeBook1 name: " << gradeBook1.getCourseName() << endl;  

    //gradeBook1.classAverage();
    //gradeBook1.inputGrades1();
    //gradeBook1.gradeReport1();

    //gradeBook1.inputGrades2();
    //gradeBook1.gradeReport2();
    gradeBook1.processGrades();
    gradeBook2.processGrades2();
}