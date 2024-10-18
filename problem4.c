#include <stdio.h>

int main() {
    int sayi;  // Kullanıcının gireceği sayıyı tutacak değişken

    printf("Lutfen Bir Sayi Giriniz: ");  // Kullanıcıdan bir sayı istiyoruz
    scanf("%d", &sayi);  // Girdiği sayıyı değişkene atıyoruz

    // Sayının çift olup olmadığını kontrol ediyoruz
    if (sayi % 2 == 0) {
        printf("Girilen Sayi Cifttir.\n");  // Sayı çiftse yazdırıyoruz

        // Sayının 6'ya tam bölünüp bölünmediğini kontrol ediyoruz
        if (sayi % 6 == 0) {
            printf("Girilen Sayi 6'ya tam Bolunur.");
        } else {
            printf("Girilen Sayi 6'ya tam Bolunmez.");
        }
    } 
    // Sayının tek olduğu durum
    else {
        printf("Girilen Sayi Tektir.\n");  // Sayı tekse yazdırıyoruz

        // Sayının 3'e tam bölünüp bölünmediğini kontrol ediyoruz
        if (sayi % 3 == 0) {
            printf("Girilen Sayi 3'e Tam Bolunur.");
        } else {
            printf("Girilen Sayi 3'e Tam Bolunmez.");
        }
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
