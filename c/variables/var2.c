#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int tamsayi;
    float kesirlisayi;
    double kesirlisayi2;
    char harf;
    char str[15];

    printf("Bir tam sayı girin: ");
    scanf("%d", &tamsayi);

    printf("Bir kesirli sayı (float) girin: ");
    scanf("%f", &kesirlisayi);

    printf("Bir kesirli sayı (double) girin: ");
    scanf("%lf", &kesirlisayi2); // double için %lf kullanılır

    printf("Bir karakter girin: ");
    scanf(" %c", &harf); // %c öncesinde boşluk bırakmak scanf'nin önceki satırdaki \n karakterini almasını engeller

    printf("Bir kelime veya kısa bir metin girin: ");
    scanf("%s", str); // char dizisi için & işaretine gerek yoktur

    printf("\nGirdiğiniz Değerler:\n");
    printf("Tam sayı: %d\n", tamsayi);
    printf("Kesirli sayı (float): %.2f\n", kesirlisayi);
    printf("Kesirli sayı (double): %.2lf\n", kesirlisayi2);
    printf("Karakter: %c\n", harf);
    printf("Metin: %s\n", str);

    return 0;
}
