#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct calisanBilgisi{
    char unvan[10];
    float maas;
};

struct calisanlar {
    char ad[20];
    char soyad[20];
    int yas;
    struct calisanBilgisi bilgi;
};

void bilgi_goster(struct calisanlar var){
    printf("%s %f \n" , var.ad , var.bilgi.maas);
}

int main(){
    setlocale(LC_ALL, "Turkish");

    struct calisanlar calisan1;

    strcpy(calisan1.ad, "Yusuf");
    strcpy(calisan1.soyad, "Taya");
    strcpy(calisan1.bilgi.unvan,"muh");
    calisan1.bilgi.maas = 110.123122;

    bilgi_goster(calisan1);
}