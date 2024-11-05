#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    char cinsiyet;
    int boy , sayi1 , sayi2 , sayi3;


    printf("cinsiyet E/K:");
    scanf("%c" , &cinsiyet);

    printf("boy cm:");
    scanf("%c" , &boy);

    //birden fazla input alma
    print("sayıları gir:");
    scanf("%d %d %d ", &sayi1 ,&sayi2 , &sayi3 );

    if((cinsiyet == "E" || cinsiyet == "e") &&  boy > 170){
        printf("succes");
    }


    else if((cinsiyet == "K" || cinsiyet == "k") &&  boy > 150){
        printf("succes");
    }

    else{
        printf("failed");
    }

    

}