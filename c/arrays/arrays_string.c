#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char ogrenci[4][10] = {"name1","name2","str3","str4"};
    
    /*
    for(int i=0;i<4;i++)
        for(int j=0;j<14;j++){
            if (ogrenci[i][j] == '\0') 
                break;
            printf("%c",ogrenci[i][j]);

        }
    */

   for(int i=0;i<4;i++)
    printf("%s",ogrenci[i]);

}