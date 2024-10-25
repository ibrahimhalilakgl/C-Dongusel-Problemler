#include <stdio.h>  // Standart input-output işlemleri için gerekli kütüphaneyi ekliyoruz

int main() {
    int sayi1 = 44, x;  // 'sayi1' tahmin edilmesi gereken sayıdır, 'x' ise kullanıcının tahmini

    // Sonsuz döngü: Kullanıcı doğru sayıyı bulana kadar devam eder
    for (;;) {
        printf("Tahmininizi Giriniz: ");
        scanf("%d", &x);  // Kullanıcının tahminini alıyoruz

        // Doğru tahmin kontrolü
        if (x == sayi1) {
            printf("Sayiyi Dogru Tahmin Ettiniz :)\n");  // Doğru tahmin mesajı
            return 1;  // Programı sonlandırıyoruz
        } 
        // Girilen sayı hedef sayıdan küçükse uyarı mesajı
        else if (x < sayi1) {
            printf("Daha Buyuk Bir Sayi Giriniz.\n");
        } 
        // Girilen sayı hedef sayıdan büyükse uyarı mesajı
        else {
            printf("Daha Kucuk Bir Sayi Giriniz:\n");
        }
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
