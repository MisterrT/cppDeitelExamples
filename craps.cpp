#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int die1, die2, result, target;
    unsigned int seed;
    enum Status {LOSS, WON, CONTINUE};

    Status gameStatus = CONTINUE;
    seed = time(0);
    srand(seed);
    die1 = 1 + rand()%6;
    die2 = 1 + rand()%6;
    result = die1 + die2;
    cout << "Player Rolled: " << die1 << " + " << die2 << " = " << result << endl;

    if( (result == 11) || (result == 7) ){
        gameStatus = WON;
        cout << "Player wins" << endl;
    }

    else if ( (result == 2) || (result == 3) || (result == 12) ){
        gameStatus = LOSS;
        cout << "Player loses" << endl;
    }

    else{
        target = result;
        cout << "Target is: " << target << endl;
        while( gameStatus == CONTINUE ){
            die1 = 1 + rand()%6;
            die2 = 1 + rand()%6;
            result = die1 + die2;
            cout << "Player Rolled: " << die1 << " + " << die2 << " = " << result << endl;
            if (result == target){
                gameStatus = WON;
            }

            else if (result == 7){
                gameStatus = LOSS;
            }
        }
        if (gameStatus == WON){
            cout << "Player wins" << endl;
        }
        else {
            cout << "Player loses" << endl;
        }
    }
    return 0;
}