#include <stdio.h>  // Standart input-output işlemleri için gerekli kütüphaneyi ekliyoruz

int main() {
    int n, i, sayi;  // 'n' kaç sayı girileceğini, 'i' döngü sayacını, 'sayi' ise her adımda girilen sayıyı tutar
    float ort = 0;  // Sayıların toplamını tutmak için 'ort' tanımlanıyor, başlangıçta 0

    // Kullanıcıdan kaç sayı gireceğini öğreniyoruz
    printf("Kac Sayi Gireceginizi Yaziniz: ");
    scanf("%d", &n);  // Girilen sayı 'n' değişkenine atanıyor

    // Kullanıcıdan 'n' kadar sayı girmesini istiyoruz ve bunları topluyoruz
    for (i = 0; i < n; i++) {
        printf("Lutfen %d. Sayiyi Giriniz: ", i + 1);  // Her sayı için sırasıyla bilgi veriyoruz
        scanf("%d", &sayi);  // Girilen sayıyı 'sayi' değişkenine atıyoruz
        ort += sayi;  // Sayıyı toplama ekliyoruz
    }

    // Toplamı sayı adedine bölerek ortalamayı hesaplıyoruz
    ort /= n;

    // Ortalama sonucu ekrana yazdırıyoruz, 2 ondalık basamak gösteriliyor
    printf("Girilen Sayilarin Ortalamasi: %.2f", ort);

    return 0;  // Programı başarıyla sonlandırıyoruz
}
