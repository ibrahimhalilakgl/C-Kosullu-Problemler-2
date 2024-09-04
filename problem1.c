#include <stdio.h>

int main(){

    int fiyat; // Ürünün fiyatını tutmak için bir değişken tanımlanıyor

    printf("Lutfen Urunun Fiyatini Giriniz: "); // Kullanıcıdan ürünün fiyatını girmesini istiyoruz
    scanf("%d", &fiyat); // Girilen fiyatı 'fiyat' değişkenine atıyoruz

    if(fiyat > 100) // Eğer fiyat 100'den büyükse
    {
        printf("Odenmesi Gereken Tutar: %d", fiyat); // Ödenmesi gereken tutar, ürünün kendi fiyatı olarak yazdırılıyor
    }
    else // Eğer fiyat 100 veya daha küçükse
    {
        printf("Odenmesi Gereken Tutar: %d", fiyat + 20); // Ödenmesi gereken tutara 20 eklenerek yazdırılıyor
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
