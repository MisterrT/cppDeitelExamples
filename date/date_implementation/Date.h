#ifndef DATE_H
#define DATE_H

class Date{
    public:
        Date(int d, int m, int y);
        
        void setDate(int d, int m, int y);
        void setDay(int dd);
        void setMonth(int mm);
        void setYear(int yy);

        int getDay() const;
        int getMonth() const;
        int getYear() const;

        void printDate() const;

        ~Date();
    private:
        int day;
        int month;
        int year;

        bool checkDay(int d) const;
};

#endif