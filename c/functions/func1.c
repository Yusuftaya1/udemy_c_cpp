#include <stdio.h>
#include <stdlib.h>

void enbuyuksayi(int dizi[]){
    
    int enbuyukdeger=0;
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
      
    for(int i=0;i<boyut;i++){
        if(dizi[i]>enbuyukdeger){
                enbuyukdeger = dizi[i];
        }
    }
    printf("%d",enbuyukdeger);
}

int main() {
    int dizi[]={1,2,9,4,5,6,7};
    enbuyuksayi(dizi);
}