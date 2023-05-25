#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int roll, face;
    int freq1, freq2, freq3, freq4, freq5, freq6;
    unsigned int seed;

    freq1 = freq2 = freq3 = freq4 = freq5 = freq6 = 0;
    seed = time(0);
    srand(seed);

    cout << "Rolling die for 20 times..." << endl ;
    for(roll = 1; roll <= 20; roll++){
        face = 1 + ( rand()%6 );
        cout << setw(10) << face;
        if ( (roll%5)==0 ){
            cout << endl;
        }
    }
    cout << "Showing frequencies for 6 million of die rolls" << endl;
    for(roll = 1; roll <= 6000000; roll++){
        face = 1 + ( rand()%6 );
        switch (face){
            case 1:
                freq1++;
                break;
            case 2:
                freq2++;
                break;  
            case 3:
                freq3++;
                break;
            case 4:
                freq4++;
                break;
            case 5:
                freq5++;
                break;
            case 6:
                freq6++;
                break;    
            default:
                cout << "another number appeared (this shouldn't happen!!!)";
                break;                  
        }
    }
    cout << "Face" << setw(15) << "Frequency\n"
        << setw(4) << "1" << setw(15) << freq1 << "\n"
        << setw(4) << "2" << setw(15) << freq2 << "\n"
        << setw(4) << "3" << setw(15) << freq3 << "\n"
        << setw(4) << "4" << setw(15) << freq4 << "\n"
        << setw(4) << "5" << setw(15) << freq5 << "\n"
        << setw(4) << "6" << setw(15) << freq6 << endl;

    return 0;
}