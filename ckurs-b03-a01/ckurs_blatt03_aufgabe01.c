#include <stdio.h>
#include <stdlib.h>

int breite = 60;
int hoehe = 10;


int main(){

    for(int j=0; j<hoehe+2; j++){

        printf("A");

        if(j==0 || j==hoehe+1){
            for(int i=0; i<breite; i++){
                printf("A");
            }
        }

        if(j>0 && j<hoehe+1){

            for(int i=0; i<breite; i++){

                printf("B");
            }

           
        }

        printf("A\n");
    }
}




