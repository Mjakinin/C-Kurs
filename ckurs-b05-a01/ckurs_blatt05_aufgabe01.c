#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len) {
    // HIER Code einfügen

    printf("Array:");

    for(int i=0; i<len ; i++){

        if(i==len-1){
            printf("%d \n", array[i]);
        }
        else{
            printf("%d,",array[i]);
        }

    }
}

int min(int array[], int len){

    int Min = array[0];

    for(int i=0; i<len; i++){


        if(Min > array[i]){
            Min = array[i];
        }

    }
    return Min;
}

int max(int array[], int len){

    int Max = array[0];

    for(int i=0; i<len; i++){

        if(Max < array[i]){
            Max = array[i];
        }
    }
    return Max;
}

void sum(int array[], int len, int* p){

    for(int i=0; i<len; i++){
        *p = *p + array[i];
    }

}

// Schreibe die Funktion "sum", "min" und "max"

int main() {
    int array[] = {9, 4, 7, 8, 10, 5, 1, 6, 3, 2};
    int len = 10;
    int p = 0;
    print_array(array, len);
    int mini = min(array, len);
    int maxi = max(array, len);
    sum(array, len, &p);
    printf("Minimum:%d \n", mini);
    printf("Maximum:%d \n", maxi);
    printf("Summe:%d\n", p);

    // Gebe hier nacheinander das Minimum, Maximum und die Summe
    // aus. Trenne die Werte durch einen einzelnen Zeilenumbruch.
}
