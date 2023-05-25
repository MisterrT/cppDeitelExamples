#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "../../date/date_implementation/Date.h"

class Employee{
    public:
        Employee(const char* nm, const char* srnm, const Date &birth, const Date &hire);

        /*!!! ATTENZIONE !!!
        SE NON SI INDICA COME TIPO DI RITORNO UN PUNTATORE A DATI COSTANTI,
        i.e. " const char* ", PER LE FUNZIONI getName() E getSurname(), 
        SI INCORRE NELL'ERRORE DI RESTITUIRE AL CHIAMANTE UN RIFERIMENTO
        AI DATI PRIVATE DELLA CLASSE. SI STA DI FATTO ROMPENDO L'INCAPSULAMENTO!!!
        (NOTA: IL COMPILATORE IN QUESTO CASO RIESCE A SEGNALARE L'ERRORE, COSA CHE 
        POTREBBE NON ACCADERE SE SI RESTITUISSE IL RIFERIMENTO TRAMITE &, i.e., CON 
        UNA ISTRUZIONE DEL TIPO " return &name; ")*/

        const char* getName() const;
        const char* getSurname() const;

        /* Funzioni che ritornano interi oggetti Date - non necessarie 
        Date getBday() const;
        Date getHDay() const;*/

        void printEmployee() const;
        void printEmpBDay() const;
        void printEmpHDay() const;

        ~Employee();
        
        /* membri static */
        static int getEmpCount();
        

    private:
        /*al 20/10/21 ancora non visti meccanismi di allocazione dinamica della memoria.
          Si potrebbero utilizzare delle string, ma lo scopo è quello di continuare a
          familiarizzare con i puntatori, quindi si usano stringhe 'C-based' */
        //char name[25];
        //char surname[25];

        /*25/10/21 noti i meccanismi di allocazione dinamica della memoria, si provvede
          ad implementarli, modificando la classe Employee.
          name e surname sono ora dei puntatori non costanti a dati costanti, ai quali sarà 
          assegnata, tramite l'operatore 'new', la memoria necessaria per memorizzare
          nome e cognome dell'impiegato */
        char* name;
        char* surname;  
        const Date birthDate;
        const Date hireDate;

        /*membri static*/
        static int empCount;

        /* setName e setSurname dichiarate private perchè non dovrebbe essere possibile modificare 
           nome e cognome di un oggetto, una volta che è stato istanziato. */

        void setName(const char* nm);
        void setSurname(const char* srnm);
};



#endif