#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char isim[]="ASD FGH";

    //len of str
    printf("%zu\n",strlen(isim));


    //copy str
    char copy[];
    strcpy(isim,copy,3); //ilk 3 karakter


    //compare -karsilastir- alfabetik
    char meyve1 = "Kiraz";
    char meyve2 = "Muz";
    strcmp(meyve1,meyve2);
    if(strcmp(meyve1,meyve2)) printf("true");

    //strrev kelime tersi 
    char kelime[] = "asdfret";


    // strlwr string lower 
    // strupr string upper
    
}