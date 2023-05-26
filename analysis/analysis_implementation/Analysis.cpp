#include "Analysis.h"

void Analysis::courseAnalysis(){
    int counter, countPassed, countFailed, status;
    countPassed = countFailed = 0;
    counter = 0;

    while (++counter <= 10){
        cout << "Please, enter student's result: \n"
            << "1 (Passed) or 2 (Failed)\n";
        cin >> status;
        if (status == 1){
            countPassed++;
        }  
        else {
            countFailed++;
        }
    }

    cout << "Passed: " << countPassed << ", Failed: " << countFailed << endl;

    if (countPassed >= 8){
        cout << "Tuition Fees must be augmented\n" << endl;
    }
}