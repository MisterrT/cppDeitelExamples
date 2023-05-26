#ifndef SALESPERSON_H
#define SALESPERSON_H

#include<iostream>
#include<iomanip>

using namespace std;

class Sales_Person{
    public:
        Sales_Person();
        void getSales();
        int setSales(int mth, double currSale);
        void printAnnualSales();

    private:
        double annualSales;
        double sales[12];
        double totalAnnualSales();
};


#endif