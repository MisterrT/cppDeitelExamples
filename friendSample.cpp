#include <iostream>
#include <iomanip>

using namespace std;

class Count{
    friend void setX(Count &c, int val);
    public:
        
        Count(int c) : 
            x(c)
            {

            }
        void print(){
            cout << x << endl;
        }
    private:
        int x;

};

void setX(Count &C, int val){
    C.x = val;
}

/*void cannotSetX(Count &C, int val){
    C.x = val;                       NON COMPILA: cannotSetX() NON È FUNZIONE friend 
}*/

int main(){
    Count count(0);
    cout << "\nValue of member x after initialization: ";
    count.print();
    //cannotSetX(count,5);
    setX(count,5);
    cout << "\nValue of member x after setX(): ";
    count.print();
    return 0;
}
