#/*include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    char ulkeler[6];

    for(int i =0; i<6 ; i++){
        printf("karakter dizisi:\n");
        scanf(" %s",&ulkeler[i]);
    }
    printf("%s",ulkeler);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    char ulkeler[5][20];  // Her kelime için 20 karakterlik alan ayırıyoruz

    // 5 kelimeyi kullanıcıdan almak için döngü
    for (int i = 0; i < 5; i++) {
        printf("Kelime %d: ", i + 1);
        scanf("%19s", ulkeler[i]);  // En fazla 19 karakter alır, son karakter \0 için
    }

    printf("\nGirilen kelimeler:\n");
    
    // Girilen kelimeleri yazdırmak için döngü
    for (int i = 0; i < 5; i++) {
        printf("%s\n", ulkeler[i]);
    }

    return 0;
}
