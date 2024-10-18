#include <stdio.h>

int main() {
    char karakter;  // Kullanıcının gireceği karakteri tutacak değişken

    printf("Lutfen Bir Karakter Giriniz: ");  // Kullanıcıdan karakter girişi istiyoruz
    scanf(" %c", &karakter);  // Kullanıcının girdiği karakteri alıyoruz
    // Boşluk bırakılması, önceki girişlerden kalan karakterlerin alınmasını önler

    // ASCII değerine göre büyük harf kontrolü yapıyoruz
    if (karakter >= 65 && karakter <= 90) {
        printf("Girilen { %c } Karakteri Bir Buyuk Harftir.", karakter);
    }
    // ASCII değerine göre küçük harf kontrolü yapıyoruz
    else if (karakter >= 97 && karakter <= 122) {
        printf("Girilen { %c } Karakteri Bir Kucuk Harftir.", karakter);
    }
    // ASCII değerine göre sayı kontrolü yapıyoruz
    else if (karakter >= 48 && karakter <= 57) {
        printf("Girilen { %c } Karakteri Bir Sayidir.", karakter);
    }
    // Diğer tüm durumlar özel karakter olarak kabul edilir
    else {
        printf("Girilen { %c } Karakteri Bir Ozel Karakterdir.", karakter);
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
