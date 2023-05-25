#ifndef INCREMENT_H
#define INCREMENT_H

class Increment{
    public:
        Increment(int c, int i);

        void addIncrement(){
            count += increment;
        }

        void printCount() const;

    private:
        int count;
        const int increment;
};

#endif