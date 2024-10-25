#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz

int main() {
    int i;  // Döngü sayacı olarak kullanılacak 'i' değişkenini tanımlıyoruz

    // 1'den 10'a kadar olan sayıları ekrana yazdırmak için döngü oluşturuyoruz
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);  // Her adımda i'nin değerini ekrana yazdırıyoruz, araya boşluk bırakıyoruz
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}

