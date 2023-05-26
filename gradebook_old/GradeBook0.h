#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;


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
			cout << "Welcome to the Grade Book for \n" 
				<< getCourseName() << "!" << endl;
		}
	private:
		string courseName;

};


