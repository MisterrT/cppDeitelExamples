#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int dd = 1, int mm = 1, int yy = 1970){
    setDate(dd,mm,yy);
    cout << "Constructor for object Date: ";
    printDate();
}



void Date::setDate(int dd, int mm, int yy){
    setYear(yy);
    setMonth(mm);
    setDay(dd);
}

void Date::setYear(int yy){
    (yy < 1960 || yy > 2000) ? throw invalid_argument("\nValue of year out of range") : year = yy;
}

void Date::setMonth(int mm){
    (mm < 1 || mm > 12) ? throw invalid_argument("\nValue of month out of range") : month = mm;
}

void Date::setDay(int dd){
    (checkDay(dd) == true) ? throw invalid_argument("\nValue of day out of range") : day = dd;
}

int Date::getDay() const{
    return day;
}
int Date::getMonth() const{
    return month;
}
int Date::getYear() const{
    return year;
}



void Date::printDate() const{
    cout << setfill('0') << setw(2) << getDay() << '/' << getMonth() << '/' << getYear() << endl;
}

/*ritorna true se è vero che il giorno inserito è sbagliato, false altrimenti*/
bool Date::checkDay(int day) const {
    const static int daysPerMonth[] {31,28,31,30,31,30,31,31,30,31,30,31};

    /* Se si arriva a questo punto dell'esecuzione si è sicuri che month sia stato validato,
       quindi costituirà un indice consistente per l'array daysPerMonth[] */
    if(day > 0 && day <= daysPerMonth[month-1]){
        return false;
    }
    else {
        if(day <= 0){
            return true;
        }
        else{
            /*TEST DELL'ANNO BISESTILE*/
            if( month == 2 && day == 29 && ( year%400 == 0 || ( year%4 == 0 && year%100 != 0 ) ) ){
                return false;
            }
            else{
                return true;
            }
        }
    }  
}


Date::~Date(){
    cout << "Destructor for object Date: ";
    printDate();
}

