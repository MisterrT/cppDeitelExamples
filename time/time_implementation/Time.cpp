#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "Time.h"

using namespace std;

Time::Time(int hrs, int mins, int secs){
    setTime(hrs, mins, secs);
}

void Time::setTime(int hh, int mm, int ss){
    setHour(hh);
    setMin(mm);
    setSec(ss);

    /* CODICE PRECEDENTE DI setTime(int,int,int)
    int counter = 0;
    (hh >= 0 && hh <= 24) ? counter = counter : counter++;
    (mm >= 0 && mm <= 60) ? counter = counter : counter++;
    (ss >= 0 && ss <= 60) ? counter = counter : counter++;
    if (counter != 0){
        cout << "\nInconsistent time value inserted, setting time to 00:00:00" << endl;
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    else {
        hours = hh;
        minutes = mm;
        seconds = ss;
    }*/
    
}

void Time::setHour(int h){
    if(h < 0 || h > 24){
        throw invalid_argument("\nHours was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        hours = h;
    }
}

void Time::setMin(int m){
    if(m < 0 || m > 60){
        throw invalid_argument("\nMinutes was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        minutes = m;
    }
}

void Time::setSec(int s){
    if(s < 0 || s > 60){
        throw invalid_argument("\nSeconds was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        seconds = s;
    }
}

/*funzioni set per consentire la chiamata in cascata*/
 Time &Time::setTime2(int hh, int mm, int ss){
    setHour(hh);
    setMin(mm);
    setSec(ss); 
    return *this;   
}


Time &Time::setHour2(int h){
    if(h < 0 || h > 24){
        throw invalid_argument("\nHours was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        hours = h;
    }
    return *this;
}

Time &Time::setMin2(int m){
    if(m < 0 || m > 60){
        throw invalid_argument("\nMinutes was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        minutes = m;
    }
    return *this;
}

Time &Time::setSec2(int s){
    if(s < 0 || s > 60){
        throw invalid_argument("\nSeconds was out of range!\nInconsistent time value inserted, try again");
    }
    else{
        seconds = s;
    }
    return *this;
}



int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds; 
}


void Time::printUniversal() const{

    cout << setfill('0')  << setw(2) << getHours() << ":" << setw(2) << getMinutes() << ":" << setw(2) << getSeconds() << endl; 

}

void Time::printStandard() const{
    /*RICORDA: ogni espressione ha un valore!
      le espressioni (hours == 0 || hours == 12) ? 12 : hours%12 e 
      (hours < 12) ? " AM" : " PM" vanno inserite all'interno di parentesi tonde affinchè ne
      sia valutato correttamente il valore */

    cout << setfill('0') << setw(2) << ( (getHours() == 0 || getHours() == 12) ? 12 : getHours()%12 ) 
        << ":" << setw(2) << getMinutes() << ":" << setw(2) << getSeconds() 
        << ( (getHours() < 12) ? " AM" : " PM"  ) << endl;

}