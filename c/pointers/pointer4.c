#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Turkish");
    /*
    int *alan1 = malloc(10*sizeof(int)); // ramde yer ayırma fonk.
    int *alan2 = calloc(10 , sizeof(int)); // adreste bulunan değerleri korumaz 

    for(int i=0;i<10;i++){
        printf("alan1 [%d] = %d alan2[%d] = %d \n",i,alan1[i],i,alan2[i]);
    }

    alan1 = realloc(alan1,5*sizeof(int)); //yeniden boyutlandırma
    
    free(alan1);
    free(alan2); // alanlar sisteme geri verildi;
    */

    /*int *sayidizisi = calloc(10,sizeof(int));
    char *karakterdizisi = calloc(10,sizeof(char));

    karakterdizisi[0] = 'A';
    karakterdizisi[1] = 'B';
    karakterdizisi[2] = 'C';

    for(int i=0;i<3;i++){
        printf("%c",karakterdizisi[i]);
    }
    */

    char** karakterdizi;
    karakterdizi = malloc(sizeof(char*)*3);
    
    for(int i=0;i<3;i++){
        karakterdizi[i] = malloc(10*sizeof(char));
    }

    karakterdizi[0] = "text1";
    karakterdizi[1] = "text2";
    karakterdizi[2] = "text3";

    for(int i=0;i<3;i++){
        printf("%s\n",karakterdizi[i]);
    }

    return 0;

}