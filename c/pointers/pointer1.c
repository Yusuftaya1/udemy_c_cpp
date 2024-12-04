#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Turkish");

    /*int sayi ;
    int *sayi_adres;

    printf("sayi gir: ");
    scanf("%d",&sayi);
    sayi_adres = &sayi;
    
    printf("%d %p \n", *sayi_adres , sayi_adres);
    printf("%d %p \n", sayi ,&sayi);
    */

   /*
   int sayi = 12 ,*sayinin_adresi;
   float kesirli_sayi = 5.7 ,*kesirli_sayi_adres;
   double buyuk_kesirli_sayi = 7.8 , *buyuk_kesirli_sayi_adres;
   char karakter = 'K' , *karakter_adres;
   
   sayinin_adresi= &sayi;
   kesirli_sayi_adres= &kesirli_sayi;
   buyuk_kesirli_sayi_adres= &buyuk_kesirli_sayi;
   karakter_adres= &karakter;

    printf("%d %p \n"  , *sayinin_adresi , sayinin_adresi);
    printf("%f %p \n"  , *kesirli_sayi_adres , kesirli_sayi_adres);
    printf("%lf %p \n" , *buyuk_kesirli_sayi_adres , buyuk_kesirli_sayi_adres);
    printf("%d %p \n"  , *karakter_adres  , karakter_adres);
    */

    int sayilar[6] = {1,2,3,4,5,6};
    printf("%p \n" , &sayilar);
    printf("%p \n" , &sayilar[1]);
    printf("%p \n" , &sayilar[2]);
    printf("%p \n" , &sayilar[3]);
    printf("%p \n" , &sayilar[4]);
    printf("%p \n" , &sayilar[5]);
    printf("%p \n" , &sayilar[6]);

    return 0;
}