#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    a = 5;
    b = 7;
    printf("Before swap: a = %d and b = %d\n", a, b);
    swap(&a,&b);
    printf("After swap: a = %d and b = %d\n", a, b);
    return EXIT_SUCCESS;
}