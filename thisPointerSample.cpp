#include<iostream>
#include<iomanip>

using namespace std;

class Sample{
    public:
        Sample(int val)
            : x(val){

        }

        void print() const{
            cout << "\nRetrieving member x:   " 
                <<"\n          x = " << x << endl;
            cout << "\nRetrieving x wiht 'this' pointer"
                << "\n this -> x = " << this -> x << endl;
            cout << "\nRetrieving x wiht 'this' pointer"
                << "\n (*this).x = " << this -> x << endl;    

        }
    private:
        int x;
};

int main(){
    Sample smpl(5);
    smpl.print();
    return 0;
}