#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    int bilet_sayisi = 100;
    char bilet_al;

    for(;bilet_sayisi>0;){
        printf("Bilet al E/H:");
        scanf("%c", &bilet_al);

        if(bilet_al == 'E' || bilet_al == 'e'){
            int alinan_bilet_sayisi;
            printf("kaç bilet");
            scanf("%d", &alinan_bilet_sayisi);
            if(alinan_bilet_sayisi <= bilet_sayisi){
                bilet_sayisi -= alinan_bilet_sayisi;
            }
            else printf("yetesiz bilet\n");

        }
        else break;
    }


}