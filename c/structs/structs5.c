#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct ogrenci {
    char ad[20];
    char soyad[20];
    char okul[20];
    char bolum[20];

    int okulno;
    int sinif;
}ogrenci;

int main() {
    setlocale(LC_ALL, "Turkish");

    // Yapı değişkenleri
    ogrenci ogr1;
    ogrenci ogr2;

    strcpy(ogr1.ad, "Yusuf");
    strcpy(ogr1.soyad, "Taya");

    strcpy(ogr2.ad, "Beyza");
    strcpy(ogr2.soyad, "Src");
    
    return 0;
}