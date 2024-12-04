#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ogrenci {
    char ad[20];
    char soyad[20];
    char okul[20];
    char bolum[20];

    int okulno;
    int sinif;
};

void bilgi_goster(struct ogrenci *var_ogr){
    printf("%s %s \n",var_ogr->ad,var_ogr->soyad);
}

int main() {
    setlocale(LC_ALL, "Turkish");

    // Yapı değişkenleri
    struct ogrenci ogr1 , *ptr_ogr1;
    struct ogrenci ogr2 , *ptr_ogr2;

    ptr_ogr1 = &ogr1;
    ptr_ogr2 = &ogr2;

    strcpy(ptr_ogr1->ad, "Yusuf");
    strcpy(ptr_ogr1->soyad, "Taya");

    strcpy(ptr_ogr2->ad, "Beyza");
    strcpy(ptr_ogr2->soyad, "Src");

    bilgi_goster(ptr_ogr1);
    bilgi_goster(ptr_ogr2);
    return 0;
}
