#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Turkish");
    
    char *takimlar[] = {"text1","text2","text3","t4","t5"};

    for(int i=0; takimlar[i] != "\0" ;i++){
        //printf("%s \n",*(takimlar + i));
        //printf("%p \n",(takimlar + i));
        printf("******************** \n");
        //printf("%s \n" , takimlar[i]);
        //printf("%p \n" , &takimlar[i]);
    }

    return 0 ;
}