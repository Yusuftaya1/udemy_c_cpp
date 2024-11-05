#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int secim;
    float sayi1, sayi2;

    menu:
    printf("islem(1-6):");
    scanf("%d",&secim);
    
    printf("2 sayi: ");
    scanf("%f %f" , &sayi1 , &sayi2);

    switch (secim){
    case 1:
        printf("1 %f ", sayi1 + sayi2 ,"\n");
        break;

    case 2:
        printf("2 %f", sayi1-sayi2 ,"\n");
        break;
    
    default:

        break;
    }
    goto menu;

}