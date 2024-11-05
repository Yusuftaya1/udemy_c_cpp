#include <stdio.h>
#include <stdlib.h>

#define enbuyuksayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 :sayi2
#define saaatsoyle(karakter) (karakter =='E' || karakter == 'e') ? __TIME__ : "HAYIR"


int main() {
    
    printf("%d",enbuyuksayi(4,5));printf("\n");
    printf("%s",saaatsoyle('e'));
    return 0;
}