#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>

using namespace std;

int main(){
    const int arraySize = 10;
    int c[arraySize] = {0};
    int i, j;

    cout << "Element" << setw(10) << "Value" << endl;
    for(i = 0; i < arraySize; i++){
        cout << setw(7) << i << setw(10) << c[i] << endl;
    }

    cout << endl;

    cout << "Element" << setw(10) << "Value" << endl;
    for(i = 0; i < arraySize; i++){
        c[i] = 2*(1 + i);
        cout << setw(7) << i << setw(10) << c[i] << endl;
    }

    cout << endl;

    const int arraySize2 = 11;
    int grades[arraySize2] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};
    
    cout << "Grades Distribution:" << endl;
    for( i = 0; i < arraySize2; i++){
        
        if (i == 0){
            cout << "  0-9:"; 
        }

        else if(i == 10){
            cout << "  100: ";
        }
        
        else {
        cout << i*10 << "-" << i*10 + 9 << ": ";
        }

        for (j = 0; j < grades[i]; j++){
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    const int arraySize3 = 7, dieRolls = 6000000;
    int dieFreqs[arraySize3] = {0};
    int seed;

    seed = time(0);
    srand(seed);

    for (i = 1; i <= dieRolls; i++){
        dieFreqs[ rand()%6 + 1 ]++;
    }
    cout << "Face " << setw(10) << "Frequency" << endl;
    for ( j = 1; j < arraySize3; j++){
        cout << "Face: " << setw(3) << j << setw(10) << dieFreqs[j] << "\n";
    }

    cout << endl;

    const int arraySize4 = 40;
    const int arraySize5 = 11;

    const int rating[arraySize4] = {1,2,6,4,8,5,9,7,8,10,1,
                                6,3,8,6,10,3,8,2,7,6,5,
                                7,6,8,6,7,5,6,6,5,6,7,5
                                ,6,4,8,6,8,10};
    
    int ratingFreq[arraySize5] = {0};                

    for (i = 0; i < arraySize4; i++){
        ratingFreq[ rating[i] ]++;
    }            

    cout << "Rating" << setw(17) << "Frequency" << endl;

    for (i = 1; i < arraySize5; i++){
        cout << setw(6) << i << setw(17) << ratingFreq[i] << endl;
    }

    const int stringSize = 20;
    char string1[stringSize];
    char string2[] = "String Literal";

    cout << "Enter the string \"Hello there!\":" << endl;
    cin >> string1;

    cout << "first string is: " << string1 << "\nsecond string is: " << string2 << endl;

    cout << "first string with spaced characters is: \n";

    for(i = 0; string1[i] != '\0'; i++){
        cout << string1[i] << " ";
    }

    cin >> string1;
    cout << "\nFirst string is: " << string1 << endl;
    
    return 0;
}