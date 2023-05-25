#include<iostream>
using std::cout;
using std::endl;

#include "GradeBook0.h"


int main(){
	GradeBook gradeBook1("CS01 C++ Programming Course");
	GradeBook gradeBook2("CS02 Data Structures for C++");
	
	cout << "gradeBook1 created for:" << gradeBook1.getCourseName() 
		<< "\ngradeBook2 created for:"<< gradeBook2.getCourseName() << endl;

	return 0;
}
