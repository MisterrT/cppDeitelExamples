//identica a gradeBook2, utilizza GradeBook1.h, che stavolta contiene solo l'interfaccia della classe
//gradebook, mentre l'implementazione risiederà in GradeBook.cpp

#include<iostream>
using std::cout;
using std::endl;

#include "gradeBook3_implementation/GradeBook1.h"


int main(){
	GradeBook gradeBook1("CS01 C++ Programming Course");
	GradeBook gradeBook2("CS02 Data Structures for C++");
	
	cout << "this is gradeBook3.cpp calling stuff contained in gradeBook3_implementation " << endl;
	cout << "\ngradeBook1 created for:" << gradeBook1.getCourseName() 
		<< "\ngradeBook2 created for:"<< gradeBook2.getCourseName() << endl;

	return 0;
}
