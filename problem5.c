#include <stdio.h>  // Standart input-output işlemleri için kütüphaneyi ekliyoruz

int main() {
    int i, toplam = 0;  // 'i' döngü sayacı, 'toplam' değişkeni başlangıçta 0 olarak tanımlanıyor

    // 1'den 10'a kadar olan sayıları toplamak için döngü oluşturuyoruz
    for (i = 1; i <= 10; i++) {
        toplam += i;  // Her döngü adımında 'i' değerini 'toplam'a ekliyoruz
    }

    // Toplam sonucu ekrana yazdırıyoruz
    printf("Toplam Sonuc: %d", toplam);

    return 0;  // Programı başarıyla sonlandırıyoruz
}
