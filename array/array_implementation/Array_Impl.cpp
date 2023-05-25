#include<iomanip>
#include "Array_Impl.h"

using namespace std;
/*Costruttore di default*/
Array::Array(int n){
    size = n;
    if (size <= 0){
        cerr << "\nPassed invalid array dimension: it must be grater than zero" << endl;
        exit(EXIT_FAILURE);
    }    
    else{
        ptr = new int[size]; 
        for (int i = 0; i < size; i++){
            *(ptr+i) = 0;
        }
    }       
}

/*Costruttore di copia*/
Array::Array(const Array &arr) 
    : size(arr.getSize())
{
    ptr = new int[size];
    for (int i = 0; i < size; i++){
        *(ptr+i) = arr[i];          //Utilizza l'operatore ridefinito di indicizzazione
    }
}

/*L'indicizzazione restituirà una copia non alterata, grazie al qualificatore const,
  di arr[idx], che può essere utilizzata come rvalue */
int Array::operator[](int idx) const {
    if (idx < 0 || idx >= size ){
        cerr << "\nError: Index out of range!"<<endl;
        exit(EXIT_FAILURE);
    }
    return *(ptr+idx);
}

/*L'indicizzazione restituirà un riferimento ad arr[idx], che può essere utilizzato
  come lvlaue */
int &Array::operator[](int idx){
    if ( idx < 0 || idx >= size ){
        cerr << "\nError: Index out of range!"<<endl;
        exit(EXIT_FAILURE);
    }
    return *(ptr+idx);
}


bool Array::operator==(const Array &arr) const{
    for (int i = 0; i < size; i++){
        if( *(ptr+i) != arr[i] )                  //Utilizza l'operatore ridefinito di indicizzazione
            return false;
    }
    return true;
}

bool Array::operator!=(const Array &arr) const{
    return !( *this == arr );
}

Array &Array::operator=(const Array &arr){
/*Prima di effettuare l'assegnamento, si verifica se si sta facendo autoassegnamento,
  nel qual caso non si effettuerà alcun assegnamento*/    
    if( *this != arr ){
        if (size != arr.getSize()){ // se le dimensioni dei due array sono diverse
            delete[] ptr;           // size diventa il size di arr, si dealloca e 
            size = arr.getSize();   // rialloca la memoria necessaria
            ptr = new int[size];
        }
        for( int i = 0; i < size; i++ ){
            *(ptr+i) = arr[i];      //Utilizza l'operatore ridefinito di indicizzazione
        }
        return *this;
    }
    return *this;
}

ostream &operator<<(ostream &out, const Array &arr){
    for (int i = 0; i < arr.getSize(); i++){
        out << setw(12) << arr[i];                      //Utilizza l'operatore ridefinito di indicizzazione
        if ((i+1) % 4 == 0){
            out << endl;
        }
    }
    out << endl;
    return out;
}

istream &operator>>(istream &in, Array &arr){
    for (int i = 0; i < arr.getSize(); i++){
        in >> arr[i];                                   //Utilizza l'operatore ridefinito di indicizzazione
    }
    return in;
}

/*Distruttore*/
Array::~Array(){
    delete[] ptr;
}