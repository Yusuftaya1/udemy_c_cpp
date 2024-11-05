#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int puan;
    printf("ypuan: ");
    scanf("%d",&puan);

    if (puan >= 80) printf("reşit");
    else if(60 <= puan && puan < 80) printf("değil\n");
    
}