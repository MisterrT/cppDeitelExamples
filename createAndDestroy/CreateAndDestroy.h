#ifndef CREATE_H
#define CREATE_H

#include<iostream>
#include<iomanip>
#include <string>

using namespace std;

class CreateAndDestroy{
    public:
        CreateAndDestroy(int id, string str){
            objectID = id;
            objectMsg = str;

            cout << "Object " << objectID << "  constructor runs  " << objectMsg << endl;
        }

        /* alt gr + ì per il carattere tilde ( ~ ) */
        ~CreateAndDestroy(){
            cout << ( (objectID == 1 || objectID == 6) ? "\n" : "" );

            cout << "Object " << objectID << "  destructor runs  " << objectMsg << endl;
        }


    private:
        int objectID;
        string objectMsg;

};


#endif
