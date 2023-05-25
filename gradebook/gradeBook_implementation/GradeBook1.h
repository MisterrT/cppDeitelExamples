#include<string>
using std::string;


class GradeBook{
	public:

		const static int numOfStudents = 10;
		const static int numOfTests = 3;

		GradeBook(string nameOfCourse, const int gradesArray[]);

		GradeBook(string nameOfCourse, const int gradesArray[][numOfTests]);

		void setCourseName(string nameOfCourse);

		string getCourseName();

		void displayMessage();

		void processGrades();

		void processGrades2();

		int getMinimum();

		int getMinimum2();

		int getMaximum();

		int getMaximum2();

		double getAverage();

		double getAverage(const int grades[]);

		void outputBarChart();

		void outputBarChart2();

		void outputGrades();

		void outputGrades(const int grades[]);

		void classAverage();

		void inputGrades1();

		void gradeReport1();

		void inputGrades2();

		void gradeReport2();

		int maximum(int g1, int g2, int g3);

	private:
		string courseName;
		int grades[ numOfStudents ];
		int grades2[numOfStudents][numOfTests];

		int aCount;
		int bCount;
		int cCount;
		int dCount;
		int fCount;
		int maxGrade;
		
};


