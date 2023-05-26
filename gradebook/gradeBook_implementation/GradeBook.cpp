#include<iostream>
#include<iomanip>
using namespace std;
#include "GradeBook1.h"

	
GradeBook::GradeBook(string nameOfCourse, const int gradesArray[]){
	setCourseName(nameOfCourse);
	for ( int i = 0; i < numOfStudents; i++){
		grades[i] = gradesArray[i];
	}	
	aCount = bCount = cCount = dCount = fCount = 0;
	maxGrade = 0;
}

GradeBook::GradeBook(string nameOfCourse, const int gradesArray[][numOfTests]){
	setCourseName(nameOfCourse);
	for ( int i = 0; i < numOfStudents; i++){
		for ( int j = 0; j < numOfTests; j++){
			grades2[i][j] = gradesArray[i][j];
		}
	}	
	aCount = bCount = cCount = dCount = fCount = 0;
	maxGrade = 0;
}

void GradeBook::setCourseName(string nameOfCourse){
	if(nameOfCourse.length() <= 25)
		courseName = nameOfCourse;

	else{
		cout << "Course Name " << nameOfCourse << 
				" exceeds 25 characters, it will be truncated\n" << endl;
		courseName = nameOfCourse.substr(0,25);
	}			
}

string GradeBook::getCourseName(){
	return courseName;		
}


void GradeBook::displayMessage(){
	cout << "Welcome to the Grade Book for \n" 
		<< getCourseName() << "!" << endl;
}
	

void GradeBook::processGrades(){

	outputGrades();

	cout << "\nClass Average is: " << setprecision(2) << fixed << getAverage() << endl;

	cout << "Lowest grade is: " << getMinimum() << endl;

	cout << "Highest grade is: " << getMaximum() << "\n" << endl;

	outputBarChart();

}

void GradeBook::processGrades2(){

	cout << "Grades are: " << endl;

	cout << setw(21);
	for (int i = 0; i < numOfTests; i++){
		cout <<"Test " << i + 1 << " " << setw(8);
	}
	
	cout << "Average" << endl;
	for(int i = 0; i < numOfStudents; i++){
		cout << "Student " << i + 1;
		outputGrades(grades2[i]);

		cout << setw(10) << setprecision(2) << fixed << getAverage(grades2[i]) << endl;
	}

	
	cout << "Lowest grade is: " << getMinimum2() << endl;

	cout << "Highest grade is: " << getMaximum2() << "\n" << endl;

	outputBarChart2();

}

int GradeBook::getMinimum(){
	/*a grade ranges from 0 to 100, assuming minVal equal to 100*/
	int minVal = 100;
	for (int i = 0; i < numOfStudents; i++){
		if (grades[i] < minVal){
			minVal = grades[i];
		}
	}
	return minVal;
}

int GradeBook::getMinimum2(){
	/*a grade ranges from 0 to 100, assuming minVal equal to 100*/
	int minVal = 100;
	for (int i = 0; i < numOfStudents; i++){
		for (int j = 0; j < numOfTests; j++){
			if (grades2[i][j] < minVal){
			minVal = grades2[i][j];
			}
		}
		
	}
	return minVal;
}

int GradeBook::getMaximum(){
	/*a grade ranges from 0 to 100, assuming maxVal equal to 0*/
	int maxVal = 0;
	for (int i = 0; i < numOfStudents; i++){
		if (grades[i] > maxVal){
			maxVal = grades[i];
		}
	}
	return maxVal;
}

int GradeBook::getMaximum2(){
	/*a grade ranges from 0 to 100, assuming maxVal equal to 0*/
	int maxVal = 0;
	for (int i = 0; i < numOfStudents; i++){
		for (int j = 0; j < numOfTests; j++){
			if (grades2[i][j] > maxVal){
			maxVal = grades2[i][j];
			}
		}
		
	}
	return maxVal;
}

double GradeBook::getAverage(){
	int total = 0;
	for (int i = 0; i < numOfStudents; i++){
		total += grades[i];
	}
	return static_cast <double> (total)/numOfStudents;
}

double GradeBook::getAverage(const int grades[]){
	int total = 0;
	for (int i = 0; i < numOfTests; i++){
		total += grades[i];
	}
	return static_cast <double> (total)/numOfTests;
}

void GradeBook::outputBarChart(){
	const int freqSize = 11;
	int freqs[freqSize] = {0};

	cout << "Grades Distribution:" << endl;

    for(int k = 0; k < numOfStudents; k++){
		freqs[grades[k]/10]++;
	}

    for(int i = 0; i < freqSize; i++){
        
        if (i == 0){
            cout << "  0-9: "; 
        }

        else if(i == freqSize - 1){
            cout << "  100: ";
        }
        
        else {
        cout << i*10 << "-" << i*10 + 9 << ": ";
        }

        for (int j = 0; j < freqs[i]; j++){
            cout << '*';
        }

        cout << endl;
    }
}	

void GradeBook::outputBarChart2(){
	const int freqSize = 11;
	int freqs[freqSize] = {0};

	cout << "Grades Distribution:" << endl;

    for(int k = 0; k < numOfStudents; k++){
		for (int l = 0; l < numOfTests; l++){
			freqs[grades2[k][l]/10]++;
		}
	}

    for(int i = 0; i < freqSize; i++){
        
        if (i == 0){
            cout << "  0-9: "; 
        }

        else if(i == freqSize - 1){
            cout << "  100: ";
        }
        
        else {
        cout << i*10 << "-" << i*10 + 9 << ": ";
        }

        for (int j = 0; j < freqs[i]; j++){
            cout << '*';
        }

        cout << endl;
    }
}	

void GradeBook::outputGrades(){
	
	for (int i = 0; i < numOfStudents; i++){
		cout << "Student " << i + 1 << ": " << grades[i] << endl;
	}
}

void GradeBook::outputGrades(const int grades[]){
	
	for (int i = 0; i < numOfTests; i++){
		cout << setw(10) << grades[i];
	}
}

void GradeBook::classAverage(){
	int counter, grade, total;
	double average;
	grade = total = counter = average = 0;

	cout << "Please, enter the grade or '-1' to quit the session:\n";
	cin >> grade;
	
	while(grade != -1){
		total += grade;
		counter++;
		cout << "Please, enter the grade or '-1' to quit the session:\n"; 
		cin >> grade;
	}

	if (counter == 0){
		cout << "No grades entered!" << endl;
	}
	else{
		average = static_cast<double>(total)/counter;
		cout << "The total of the class is equal to: " << total << endl;
		cout << "The average of the class is equal to: " << setprecision(2) << fixed << average << endl;
	}
}

void GradeBook::inputGrades1(){
	int grade;

	cout << "Enter a grade or EOF to quit the session" << endl;

	while( (grade = cin.get()) != EOF ){
		switch(grade){
			case 'A':
			case 'a':
				aCount++;
				break;
			case 'B':
			case 'b':
				bCount++;
				break;
			case 'C':
			case 'c':
				cCount++;
				break;
			case 'D':
			case 'd':
				dCount++;
				break;
			case 'F':
			case 'f':
				fCount++;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Invalid grade letter entered.\n"
					<< "Enter a new grade." << endl;
				break;					
		}
	}
}



void GradeBook::gradeReport1(){
	cout << "Tot A: " << aCount;
	cout << "\nTot B: " << bCount;
	cout << "\nTot C: " << cCount;
	cout << "\nTot D: " << dCount;
	cout << "\nTot F: " << fCount << endl;
}

void GradeBook::inputGrades2(){
	int grade1, grade2, grade3;

	cout << "Please enter three grades"<< endl;
	cin >> grade1 >> grade2 >> grade3;

	maxGrade = maximum(grade1, grade2, grade3);

}

void GradeBook::gradeReport2(){
	cout << "Maximum Grade is: " << maxGrade << endl;
}

int GradeBook::maximum(int g1, int g2, int g3){
	int max;

	if( (g1 < g2) ){
		if(g2 < g3){
			max = g3;
			return max;
		}
		else {
			max = g2;
			return max;
		}
	}
	else {
		if(g1 < g3){
			max = g3;
			return max;
		}
		else {
			max = g1;
			return max;
		}
	}
}