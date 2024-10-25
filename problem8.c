#include <stdio.h>  // Standart input-output işlemleri için gerekli kütüphaneyi ekliyoruz

int main() {
    int sayi1, sayi2, i, x;  // Kullanıcıdan alınacak sayılar ve işlem seçimi için değişkenler tanımlanıyor

    // İlk sayıyı kullanıcıdan alıyoruz
    printf("Lutfen Ilk Sayiyi Giriniz: ");
    scanf("%d", &sayi1);

    // İkinci sayıyı kullanıcıdan alıyoruz
    printf("Luıtgfen Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    // Sonsuz döngü: Kullanıcı 0 girene kadar işlem yapmaya devam eder
    for (;;) {
        printf("Lutfen Islemi Giriniz: ");
        scanf("%d", &x);  // Kullanıcıdan işlem seçimi alıyoruz

        // Seçilen işleme göre koşullu ifadeleri kontrol ediyoruz
        if (x == 1) {
            printf("Girilen Sayilarin Toplami: %d\n", (sayi1 + sayi2));  // Toplama işlemi
        } 
        else if (x == 2) {
            printf("Girilen Sayilarin Farki: %d\n", (sayi1 - sayi2));  // Çıkarma işlemi
        } 
        else if (x == 3) {
            printf("Girilen Sayilarin Carpimi: %d\n", (sayi1 * sayi2));  // Çarpma işlemi
        } 
        else if (x == 4) {
            // Bölme işlemi, virgülden sonra 2 basamak gösteriliyor
            printf("Girilen Sayilarin Orani: %.2f\n", (float)sayi1 / sayi2);  
        } 
        else if (x == 0) {
            // Kullanıcı 0 girerse program sonlanır
            printf("Program Sonlandiriliyor...\n");
            return 1;  // Programdan çıkıyoruz
        } 
        else {
            // Geçersiz işlem girildiğinde hata mesajı yazdırılır
            printf("Hatali Islem Girildi!\n");
        }
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
