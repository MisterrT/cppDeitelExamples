#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void first_test(){
    int a, *aPtr;
    a = 7;
    aPtr = &a;

    cout << "address of a: " << &a << endl;
    cout << "value of aPtr: " << aPtr << endl;

    cout << "value of a: " << a << endl;
    cout << "value of *aPtr: " << *aPtr << endl;

    cout << "showing that * and & are inverses of each other" << endl;
    cout << "&*aPtr = " << &*aPtr << endl;
    cout << "*&aPtr = " << *&aPtr << endl;

}


int cubeByValue(int n){

    return n*n*n;

}

void cubeByReference(int* nAddr){

    *nAddr = (*nAddr)*(*nAddr)*(*nAddr);

}

void cubeByValueAndByReference(){
    int number1, number2;
    number1 = number2 = 5;
    cout << "before cubeByReference number1 is: " << number1 << endl;
    number1 = cubeByValue(number1);
    cout << "after cubeByReference number1 is: " << number1 << endl;

    cout << "\nbefore cubeByReference number2 is: " << number2 << endl;
    cubeByReference(&number2);
    cout << "after cubeByReference number1 is: " << number2 << endl;

}

void convert( char* str){
    while( (*str) != '\0' ){
        if( islower(*str) ){
            *str = toupper( *str );
        }
        str++;
    }
}

void lowerToUpperCase(){
    char phrase[] = "characters and $32.98";
    cout << "\nLower to Upper case with non constant pointer to non constant data" << endl;
    cout << "\nBefore conversion: " << phrase << endl;
    convert(phrase);
    cout << "\nAfter conversion: " << phrase << endl;
}

void printCharacters(){
    const char phraseA[] = "this is the array-style phrase";
    const char* phraseP =  "this is the pointer-style phrase";
    
    const char *phrPPtr, *phrAPtr;
    phrAPtr = phraseA;
    phrPPtr = phraseP;

    cout << '\n' << endl;

    /*Lo static_cast <> () è necessario, altrimenti cout tratta tutto, 
    stringhe e/o array di caratteri (ossia array di char senza carattere 
    terminatore di stringa), come delle stringhe, senza visualizzare 
    i valori dei registri di memoria.*/
    
    cout << static_cast <const void*> (phraseA) << endl;
    cout << static_cast <const void*> (&phraseA[0]) << endl;
    cout << &phraseA << endl;

    /*differenza tra stringhe const tipo array e stringhe 
    const tipo C:
    - per le prime (vedi le tre righe sopra) 
        phraseA == &phraseA[0] == &phraseA 

    - per le seconde (vedi le righe sotto)
        phraseP == &phraseP[0] != &phraseP

    ATTENZIONE: POTREBBE DIPENDERE DALLA MACCHINA IN PARTICOLARE*/

    cout << '\n' << endl;
    cout << static_cast < const void* > (phraseP) << endl;
    cout << '\n' << endl;

    cout << static_cast < const void* > (phrPPtr) << endl;
    cout << static_cast < const void* > (&phraseP[0]) << endl;
    cout << &phraseP << endl;
    
    //cout << static_cast < const void* > (++phrPPtr) << endl;
    //cout << static_cast < const void* > (&phraseP[1]) << endl;
    
        
    for(  ; (*phrAPtr) != '\0'; phrAPtr++ ){
        cout << *phrAPtr << " ";
    }

    cout << '\n' <<endl;

    /*altra differenza tra stringhe const tipo array e stringhe 
    const tipo C: 
    - per quelle del primo tipo non è possibile usare
      il nome dell'array/stringa nei cicli, in quanto non ne viene 
      consentito l'incremento (occorre quindi ricorrere ad un ulteriore puntatore 
      a const char). IL NOME STESSO DELL'ARRAY INTESO COME PUNTATORE È QUINDI, 
      PER DEFINIZIONE (VEDI D&D pp. 411 e 412), UN PUNTATORE COSTANTE E NON PUÒ ESSERE MODIFICATO.

    - per quelle del secondo tipo è possibile utilizzare il nome stesso della stringa 
      nei cicli, in quanto corrisponde ad un puntatore, NON COSTANTE, a const char. */

    for( ; (*phraseP) != '\0'; phraseP++){
        cout << *phraseP << " ";
    }
    cout << endl;
}


void convert2( char* const str, const int dim){
    for( int i = 0; i < dim; i++ ){
        if( islower( str[i]) ){
            str[i] = toupper( str[i] );
        }
        
    }
}



void lowerToUpperCase2(){
    char phrase[] = "characters and $32.98";
    const int phraseLength = 22;
    cout << "\nLower to Upper case with constant pointer to non constant data" << endl;
    cout << "\nBefore conversion: " << phrase << endl;
    convert2(phrase, phraseLength);
    cout << "\nAfter conversion: " << phrase << endl;
}

void copy1(char* str1, const char* str2){
    for(; (*str1 = *str2) != '\0'; str1++, str2++){
        ;
    }
}

void copy2(char* str1, const char* str2){
    for(int i = 0; (str1[i] = str2[i]) != '\0'; i++){
        ;
    }
}

void copyOfStrings(){
    char string1[10];
    char string2[] = "Hello";
    char string3[10];
    char string4[] = "It's me";

    copy1(string1, string2);
    copy2(string3, string4);

    cout << "string1 is: " << string1 << endl;
    cout << "string3 is: " << string3 << endl;
}

int main(){
    first_test();

    /*confronto tra chiamata per valore e per riferimento mediante puntatore*/

    cubeByValueAndByReference();

    /*esempio di uso di puntatore NON COSTANTE a dati NON COSTANTI
      (provare ad aggiungere il qualificatore const prima e o dopo 
      char* nell'intestazione di convert) */

    lowerToUpperCase();

    /*esempio di uso di puntatore NON COSTANTE a dati COSTANTI 
    con ulteriore approfondimento su una prima differenza tra stringhe
    in stile C e stringhe in stile array*/
    
    printCharacters();

    /*esempio di uso di puntatore COSTANTE a dati NON COSTANTI */

    lowerToUpperCase2();

    /*esempio di due funzioni che recano nell'intestazione parametri
      di tipo puntatore, salvo il fatto che una lavora effettivamente con 
      puntatori, mentre l'altra lavora con array. */

      copyOfStrings();
} 