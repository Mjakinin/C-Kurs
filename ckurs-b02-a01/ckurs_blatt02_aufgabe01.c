#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int nummer = 1; // Probiere verschiedene Werte aus: 101, 103, ...
    printf("Ist %d eine Primzahl?\n", nummer);

    int x;
    int z=0;
    bool result=true;


for(x=2;x<=nummer;x++){

    z = nummer % x;

    if(z==0 && x != nummer ){
        result=false;
    }

}
if(result==false || nummer==1 || nummer==0){
    printf("Nein");
}
else{
    printf("Ja");
}

}


