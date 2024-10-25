#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz

int main() {
    char isim[30];  // Kullanıcıdan alınacak ismi tutmak için 30 karakterlik dizi tanımlıyoruz

    printf("Lutfen Isminizi Giriniz: ");  // Kullanıcıdan ismini girmesini istiyoruz
    scanf("%s", isim);  // İsmi diziye atıyoruz

    int i;  // Döngü sayacı için 'i' değişkenini tanımlıyoruz

    // İsmi 5 kez ekrana yazdırmak için döngü oluşturuyoruz
    for (i = 0; i < 5; i++) {
        printf("Isim: %s \n", isim);  // Her döngüde ismi ekrana yazdırıyoruz ve alt satıra geçiyoruz
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
