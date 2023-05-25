/*OBIETTIVO: Progettare un mergesort che ordini in loco
    TODO:  Analisi delle prestazioni*/

#include<iostream>
#include<iomanip>

using namespace std;

int DESCENDING = 0;

void insertInt(int* const ptr, const int dim, int* flagPtr){
    cout << "Insert " << dim << " integers" << endl;
    
    for(int i = 0; i < dim; i++){
        cin >> ptr[i];
    }

    cout << "Select type of ordering: \nASCENDING: press 1 \nDESCENDING: press 0" << endl;
    cin >> *flagPtr;

    cout << "\nNumbers before mergeSort: " << endl;
    for(int j = 0; j < dim; j++){
        cout << setw(4) << ptr[j];
    }
    cout << endl;
}

void mySwap( int* p1, int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

bool ascending(int val1, int val2){
    if( val1 > val2){
        return true;
    }
    else {
        return false;
    }
}

bool descending(int val1, int val2){
    if( val1 < val2){
        return true;
    }
    else {
        return false;
    }
}

void merge(int* ptr, int start, int middle, int end, bool (*compare)(int,int) ){
    for(int i = start; i <= middle; i++){
        for(int j = middle + 1; j <= end; j++){
            
            if((*compare)(*(ptr+i),*(ptr+j))){
                
                mySwap(ptr+i, ptr+j);
                
                for(int k = j; k < end; k++){

                    if((*compare)(*(ptr+k),*(ptr+k+1))){
                        
                        mySwap(ptr+k, ptr+k+1);
                        
                    }
                }
            }
            else {
                break;
            }
        }
    }
}

void mergeSort(int* ptr, int start, int end, bool (* compare)(int, int) ){
    
    int diff, middle;
    diff = end - start;
    if(diff > 0){
        middle = (end + start)/2;
        mergeSort(ptr, start, middle, compare);
        mergeSort(ptr, middle + 1, end, compare);
        merge(ptr, start, middle, end, compare);
    }
    else if (diff < 0){
        cout << diff << endl;
        return;
    }
}

int main(){
    int size = 14, start, end;
    int numbers[size];

    int flag = DESCENDING;

    insertInt(numbers, size, &flag);
    start = 0;
    end = size - 1;
    mergeSort(numbers, start, end, ( flag == DESCENDING ) ? descending : ascending );
    cout << "\nNumbers after mergeSort: " << endl;
    for(int j = 0; j < size; j++){
        cout << setw(4) << numbers[j];
    }
    cout << endl;
}