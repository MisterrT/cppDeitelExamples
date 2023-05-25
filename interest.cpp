#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double amount, rate, principal;
    principal = 1000.0;
    rate = 0.5;

    cout << setprecision(2) << fixed;

    cout << "Year" << setw(21) << "Amount" << endl;

    for (int year = 1; year <= 10; year++){
        amount = principal*pow((1+rate),year);
        cout <<  setw(4) << year << setw(21) << amount << "\n";
    }
    return 0;
}
