#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void yildiz_bas(int *adet){

    printf("%d" , *adet);
}

float topla(float *sayi1 , float *sayi2){
    return *sayi1 + *sayi2;
}
float cikar(float *sayi1 , float *sayi2){
    return *sayi1 - *sayi2;
}
float carp(float *sayi1 , float *sayi2){
    return *sayi1 * *sayi2;
}

int main(){
    setlocale(LC_ALL, "Turkish");

    int sayi;
    float sayi1, sayi2;

    printf("sayilar: ");
    scanf("%f%f" , &sayi1, &sayi2);

    printf("%f \n" , topla(&sayi1,&sayi2));
    printf("%f \n" , cikar(&sayi1,&sayi2));
    printf("%f" , carp(&sayi1,&sayi2));

    return 0 ;

}