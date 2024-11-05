#include <stdio.h>
#include <stdlib.h>

int array_shape = 5;
int array_shape_2 = 20;
char isci_liste[5][20] = {"name1", "name2", "name3", "sasd4", "asdede5"};

void isim_listele(char isim_listesi[array_shape][array_shape_2]){
    for (int i = 0; i < array_shape; i++) {
        printf("%s\n", isim_listesi[i]);
    }
}

int faktoriyel(int sayi){
    if(sayi >1) return sayi*faktoriyel(sayi-1);
    else return sayi;
}

int main() {
    //isim_listele(isci_liste);
    printf("%d",faktoriyel(5));
    return 0;
}
