#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int tamsayi = 6;
    float kesirlisayi = 9.2;
    double kesirlisayi2 = 7.2;
    char harf = 'Y';
    char str[15] = "Kaan Academy";

    printf("int tamsayi değeri: %d, bellekte %lu bayt kullanıyor.\n", tamsayi, sizeof(tamsayi)); // 4 byte
    printf("float kesirlisayi değeri: %.1f, bellekte %lu bayt kullanıyor.\n", kesirlisayi, sizeof(kesirlisayi));// 4 byte
    printf("double kesirlisayi2 değeri: %.1f, bellekte %lu bayt kullanıyor.\n", kesirlisayi2, sizeof(kesirlisayi2));// 8 byte
    printf("char harf değeri: %c, bellekte %lu bayt kullanıyor.\n", harf, sizeof(harf));// 1 byte
    printf("char dizisi str değeri: %s, bellekte %lu bayt kullanıyor.\n", str, sizeof(str));// 15 byte

    return 0; 
}
