#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;

class GradeBook{
	public:
		GradeBook(string nameOfCourse){
			setCourseName(nameOfCourse);	
		}
		void setCourseName(string nameOfCourse){
			courseName = nameOfCourse;		
		}
		string getCourseName(){
			return courseName;		
		}
		void displayMessage(){
			cout << "Welcome to the Grade Book for \n" << getCourseName() << "!" << endl;
		}
	private:
		string courseName;

};

int main(){
	GradeBook gradeBook1("CS01 C++ Programming Course");
	GradeBook gradeBook2("CS02 Data Structures for C++");
	
	cout << "gradeBook1 created for:" << gradeBook1.getCourseName() 
		<< "\ngradeBook2 created for:"<< gradeBook2.getCourseName() << endl;

	return 0;
}
