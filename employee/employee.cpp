#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "employee_implementation/Employee.h"

using namespace std;

int main(){
    cout << "Number of Employees before initialization: " << Employee::getEmpCount() << endl;
    try {
        Date johnBDay(3,9,1974);
        Date johnHDay(18,1,1995);
        Employee john("John", "Mayers", johnBDay, johnHDay);
        john.printEmployee();
        john.printEmpBDay();
        john.printEmpHDay();
        cout << "Using getName() and getSurname(): " << john.getName() << " " << john.getSurname() << endl; 

        Date elenBDay(8,10,1976);
        Date elenHDay(11,9,1998);
        Employee elen("Elen","Jaeger", elenBDay, elenHDay);
        elen.printEmpBDay();
        elen.printEmpHDay();

        cout << "Number of Employees after initialization: " << Employee::getEmpCount() << endl;
    }
    catch (invalid_argument &e){
        cout << "Exception: " << e.what() << endl;
    }
    catch (bad_alloc &ba){
        cout << "Exception: " << ba.what() << endl;
    }
    cout << "Number of Employees after destruction: " << Employee::getEmpCount() << endl;
    return 0;
}