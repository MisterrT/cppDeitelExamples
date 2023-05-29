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

        /* for tilde character ( ~ ):
        - Linux: alt gr + ì 
        - Windows: alt + 1 + 2 + 6
         */
        ~CreateAndDestroy(){
            cout << ( (objectID == 1 || objectID == 6) ? "\n" : "" );

            cout << "Object " << objectID << "  destructor runs  " << objectMsg << endl;
        }


    private:
        int objectID;
        string objectMsg;

};


#endif
