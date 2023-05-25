#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

class Implementation{
    public:
        Implementation(int v);
        void setValue(int val);
        int getValue() const;
    private:
        int value;
};

#endif