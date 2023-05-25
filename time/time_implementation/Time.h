#ifndef TIME_H
#define TIME_H

class Time{
    public:
        Time(int hrs = 0, int mins = 0, int secs = 0);
        void setTime(int hh, int mm, int ss);
        void setHour(int h);
        void setMin(int m);
        void setSec(int s);

        Time &setTime2(int hh, int mm, int ss);
        Time &setHour2(int h);
        Time &setMin2(int m);
        Time &setSec2(int s);
        
        /*  19/10/21 rese const le funzioni membro get
            Questo perchè sono pensate per non modificare
            l'oggetto (che può essere a sua volta costante o meno) in questione  */
        int getHours() const;
        int getMinutes() const;
        int getSeconds() const;
        
        /*  19/10/21 rendere const le print evita il rischio di incorrere modifiche erronee agli oggetti*/
        void printUniversal() const;
        void printStandard() const;
    private:
        int hours;
        int minutes;
        int seconds;

};


#endif