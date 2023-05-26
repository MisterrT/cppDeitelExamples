#include<iostream>
#include "CreateAndDestroy.h"

using namespace std;

CreateAndDestroy first(1,"(global before main)");

void create(){
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy fifth(5, "(local automatic in create)");
    static CreateAndDestroy sixth(6, "(local static in create)");
    CreateAndDestroy seventh(7,"(local automatic in create)");
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}

int main(){
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy second(2,"(local automaitc in main)");
    static CreateAndDestroy third(3,"(local static in main)");
    
    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroy fourth(4,"(local automatic in main)");
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}