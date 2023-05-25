#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template < class T > 
T maximum(T v1, T v2, T v3){
    T maxVal;
    if(v1 < v2){
        if(v2 < v3){
            maxVal = v3;
            return maxVal;
        }
        else {
            maxVal = v2;
            return maxVal;
        } 
    }
    else {
        if(v1 < v3){
            maxVal = v3;
            return maxVal;
        }
        else {
            maxVal = v1;
            return maxVal;
        }
    }
}

int main(){
    int v1, v2, v3;
    double w1, w2, w3;
    char t1, t2, t3;

    v1 = 6;
    v2 = 4;
    v3 = 14;

    w1 = 14.5;
    w2 = 9.5;
    w3 = 7.5;

    t1 = 'a';
    t2 = 'b';
    t3 = 'c';

    cout << "Maximum between three int is: " << maximum(v1, v2, v3) << endl;
    cout << "Maximum between three double is: " << maximum(w1, w2, w3) << endl;
    cout << "Maximum between three char is: " << maximum(t1, t2, t3) << endl;

    return 0;

}