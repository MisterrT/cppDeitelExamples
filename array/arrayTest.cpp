#include<iostream>
#include<iomanip>

#include "array_implementation/Array_Impl.h"

using namespace std;

int main(){

    Array arr1(15);
    Array arr2;
    Array arr3(5);

    cout << "\nArray arr1:\n" << arr1[0] << endl;
    cout << "\nEnter new elements for Array arr1:" << endl;
    cin >> arr1;
    cout << "\nArray arr1:\n" << arr1 << endl;
    cout << "\nSize of Array arr1:\n" << arr1.getSize() << endl;
    cout << "\nArray arr2:\n" << arr2 << endl;
    cout << "\nSize of Array arr2:\n" << arr2.getSize() << endl;

    arr2 = arr1;
    cout << "\nArray arr2 after assignment:\n" << arr2 << endl;
    cout << "\nSize of Array arr2 after assignment:\n" << arr2.getSize() << endl;

    cout << "\nEnter new elements for Array arr3:" << endl;
    cin >> arr3;
    cout << "\nArray arr3:\n" << arr3 << endl;
    cout << "\nSize of Array arr3:\n" << arr3.getSize() << endl;

    Array arr4(arr3);
    cout << "\nArray arr4:\n" << arr4 << endl;
    cout << "\nSize of Array arr4:\n" << arr4.getSize() << endl;

    if(arr3 == arr4){
        cout << "\nArray arr3 is equal to Array arr4!\n" << endl;
    }

    if(arr2 != arr4){
        cout << "\nArray arr2 is not equal to Array arr4!\n" << endl;
    }

    cout << "\nArray arr4[14]:\n" << arr4[14] << endl;

    exit(EXIT_SUCCESS);
}