#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int dizi1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int dizi2[3][4] = {{5,4,7,8},{1,5,6,3},{1,4,2,8}};
    int toplam[3][4];

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++){
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++){
            printf("%d ",toplam[i][j]);
            printf("\n");
        }
    
}