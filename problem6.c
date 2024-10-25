#include <stdio.h>  // Standart input-output işlemleri için kütüphaneyi ekliyoruz

int main() {
    int n, i;  // 'n' kullanıcıdan alınacak sayı, 'i' döngü sayacı olarak tanımlanıyor

    // Kullanıcıdan bir sayı girmesini istiyoruz
    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &n);  // Girilen sayıyı 'n' değişkenine atıyoruz

    // 0'dan n'e kadar olan çift sayıları yazdırmak için döngü oluşturuyoruz
    for (i = 0; i <= n; i += 2) {
        printf("%d ", i);  // Her döngü adımında 'i' değerini ekrana yazdırıyoruz
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
