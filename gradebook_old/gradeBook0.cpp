#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;

class GradeBook{
	public:
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
	string nameCourse;

	GradeBook myGradeBook;
	
	cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;
	cout << "\nPlease, enter the course name:" << endl;
	getline(cin, nameCourse);
	myGradeBook.setCourseName(nameCourse);
	cout<<endl;
	myGradeBook.displayMessage();
	return 0;
}
