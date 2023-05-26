#include "SalesPerson.h"

Sales_Person::Sales_Person(){
    annualSales = 0.0;
    for(int i = 1; i < 12; i++){
        sales[i] = 0.0;
    }
}

void Sales_Person::getSales(){
    double currentSale = 0.0;
    for(int i = 1; i <= 12; i++){
        cout << "\nSales for month " << i << " : ";
        cin >> currentSale;
        while( setSales(i,currentSale) == -1 ){
            cout << "\nPlease, insert consistent values: ";
            cin >> currentSale;
        }
        cout << endl;
    }
}

int Sales_Person::setSales(int month, double currSale){
    if(month >= 1 && month <= 12 && currSale > 0){
        sales[month-1] = currSale;
        return 0;
    }
    else if (currSale <= 0){
        cout << "\nInconsistent sale's value inserted!" << endl;
        return -1;
    }
    else {
        cout << "\nInconsistent month's value inserted" << endl;
        return -1;
    }
}

void Sales_Person::printAnnualSales(){
    
    cout << setprecision(2) << fixed 
        << "\nAnnual Sales value is: " << totalAnnualSales() << endl;
}

double Sales_Person::totalAnnualSales(){
    for(int i = 0; i < 12; i++){
        annualSales += sales[i];
    }
    return annualSales;
}