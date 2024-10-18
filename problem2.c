#include <stdio.h>

int main() {
    int kilo, boy;  // Kilo ve boy için değişkenleri tanımlıyoruz
    float VKI;  // Vücut Kitle İndeksi (VKI) için değişken tanımlıyoruz

    printf("Lutfen Boyunuzun Uzunlugunu Giriniz: ");  // Boyu istiyoruz
    scanf("%d", &boy);  // Boy değerini atıyoruz

    printf("Lutfen Kilonuzu Giriniz: ");  // Kiloyu istiyoruz
    scanf("%d", &kilo);  // Kilo değerini atıyoruz

    // VKI hesaplaması yapıyoruz: (kilo) / (boy^2 / 10000)
    VKI = kilo / ((boy * boy) / 10000.0);

    // VKI değerine göre sonuçları yazdırıyoruz
    if (VKI <= 18.5) {
        printf("Zayif");
    } else if (VKI > 18.5 && VKI <= 24.9) {
        printf("Normal");
    } else if (VKI > 24.9 && VKI <= 29.9) {
        printf("Hafif Kilolu");
    } else if (VKI > 29.9 && VKI <= 34.9) {
        printf("Fazla Kilolu");
    } else {
        printf("Obez");
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
