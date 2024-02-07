#include <stdio.h>
#include <stdlib.h>
#include "input2.h"


int main() {
    int n = lese_int();
    int laenge = n-1;
    int* array = (int*) malloc(laenge * sizeof(int));

    for(int i=0; i<laenge; i++){
        array[i]=1;
    }

    for(int i=0; i<laenge ; i++){

        if(array[i]==1){

            for(int j=2; j<n; j++){

                if( (i+2) % j == 0  && (i+2) != j){

                    array[i] = 0;
                    
                }
            }
        }
    }

    print_prim(array, laenge);
    free(array);
    return 0;
}
