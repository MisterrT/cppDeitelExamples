/*Classe estremamente basic che imita quella a pag. 634
  della versione originale del Deitel & Deitel (8va ed)*/

#ifndef DIVIDEBYZEROEXCEPTION_H
#define DIVIDEBYZEROEXCEPTION_H


using namespace std;

class DivideByZeroException {
    public:
        DivideByZeroException(const char str[]){
            setMsg(str);
        } 

        void setMsg(const char s[]);
        
        char* what();

    private:
        static const int size = 30;
        char errMsg[size];
};

#endif 