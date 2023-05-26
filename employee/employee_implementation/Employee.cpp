#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<cstring>

#include "Employee.h"

using namespace std;

Employee::Employee(const char* nm, const char* srnm, const Date &birth, const Date &hire) : 
                    birthDate(birth),
                    hireDate(hire)
{
    ++empCount;
    setName(nm);
    setSurname(srnm);

    cout << "\nConstructor for object Employee: ";
    printEmployee();
}

/*vecchie versioni di setName e setSurname*/

//void Employee::setName(const char* nm){
//    int length = strlen(nm);
//    length = (length < 25) ? length : 24;
//    /*strncpy non copia il terminatore di stringa!!!*/
//   strncpy(name,nm,length);
//    name[length] = '\0';
//}

//void Employee::setSurname(const char* srnm){
//    int length = strlen(srnm);
//   length = (length < 25) ? length : 24;
//    /*strncpy non copia il terminatore di stringa!!!*/
//    strncpy(surname,srnm,length);
//    surname[length] = '\0';
//}

/* 25/10/21: nuove versioni di setName e setSurname */
void Employee::setName(const char* nm){
    name = new char[strlen(nm)];
    strcpy(name,nm);
}

void Employee::setSurname(const char* srnm){
    surname = new char[strlen(srnm)];
    strcpy(surname,srnm);
}

/*!!! ATTENZIONE !!!
SE NON SI INDICA COME TIPO DI RITORNO UN PUNTATORE A DATI COSTANTI,
i.e. " const char* ", PER LE FUNZIONI getName() E getSurname(), 
SI INCORRE NELL'ERRORE DI RESTITUIRE AL CHIAMANTE UN RIFERIMENTO
AI DATI PRIVATE DELLA CLASSE. SI STA DI FATTO ROMPENDO L'INCAPSULAMENTO!!!
(NOTA: IL COMPILATORE IN QUESTO CASO RIESCE A SEGNALARE L'ERRORE, COSA CHE 
POTREBBE NON ACCADERE SE SI RESTITUISSE IL RIFERIMENTO TRAMITE &, i.e., CON 
UNA ISTRUZIONE DEL TIPO " return &name; ")*/

const char* Employee::getName() const{
    return name;
}

const char* Employee::getSurname() const{
    return surname;
}

/* Funzioni che ritornano interi oggetti Date - non necessarie 
Date Employee::getBday() const{
    return birthDate;
}
Date Employee::getHDay() const{
    return hireDate;
}*/


void Employee::printEmployee() const{
    cout << '\n' << getName() << " " << getSurname() << endl;
}
void Employee::printEmpBDay() const{
    cout << "\nDate of Birth of: ";
    printEmployee();
    birthDate.printDate(); 
}

void Employee::printEmpHDay() const{
    cout << "\nDate of Hire of: ";
    printEmployee();
    hireDate.printDate();
}

Employee::~Employee(){
    cout << "\nDestructor for object Employee: ";
    printEmployee();
    delete[] name;
    name = 0;
    delete[] surname;
    surname = 0;
    --empCount;
}


/* Definizione del dato membro 'static int empCount':
   NON si usa static nella definizione di un dato membro static,
   altrimenti si ha un errore di compilazione.
   NOTA: se non avessi avuto l'errore di compilazione, empCount sarebbe stata 'static'
   solamente nel presente file ( questo perchè il c++ rende static una variabile con visibilità a livello di file )  */
int Employee::empCount = 0;

int Employee::getEmpCount(){
    return empCount;
}