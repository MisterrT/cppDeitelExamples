/* La seguente Classe Array è in grado di:
    1) Effettuare controlli sulla validità degli indici, per non oltrepassare i limiti fisici dell'array  (fatto)
    2) Assegnare un intero array ad un altro mediante l'operatore di assegnamemnto                        (fatto)
    3) Conoscere la propria dimensione                                                                    (fatto)
    4) Effettuare l'I/O di interi array                                                                   (fatto)
    5) Confrontare due array mediante gli operatori ' == ' e ' != '                                       (fatto)
*/    
#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

using namespace std;

class Array{
    friend ostream &operator<<(ostream &out, const Array &arr); /*Per implementare 4)*/
    friend istream &operator>>(istream &in, Array &arr);        /*Per implementare 4)*/
public:
    /*Costruttore, di default*/
    Array(int n = 10);
    /*Costruttore di copia*/
    Array(const Array &arr);

    int getSize() const{
        return size;
    }

    int operator[](int idx) const; /*Per implementare 1*/
    int &operator[](int idx);      /*Per implementare 1*/

    bool operator==(const Array &arr) const; /*Per implementare 5)*/
    bool operator!=(const Array &arr) const; /*Per implementare 5)*/

    Array &operator=(const Array &arr); /*Per implementare 2)*/

    /*Distruttore*/
    ~Array();
private:
    int size; /*Per implementare 3)*/  
    int *ptr;
};

#endif




