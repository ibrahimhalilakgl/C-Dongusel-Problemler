#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz

int main() {
    char isim[30];  // Kullanıcıdan alınacak ismi tutmak için 30 karakterlik dizi tanımlıyoruz

    // Kullanıcıdan ismini girmesini istiyoruz
    printf("Lutfen Isminizi Giriniz: ");
    scanf("%s", isim);  // Girilen ismi 'isim' dizisine atıyoruz

    int adet, i;  // 'adet' ve 'i' değişkenlerini tanımlıyoruz (sırasıyla sayı girişi ve döngü sayacı için)

    // Kullanıcıdan ismin kaç kez yazdırılacağını soruyoruz
    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &adet);  // Girilen sayıyı 'adet' değişkenine atıyoruz

    // İsmi 'adet' kadar kez ekrana yazdırmak için döngü oluşturuyoruz
    for (i = 0; i < adet; i++) {
        printf("Isim: %s\n", isim);  // İsmimizi ekrana yazdırıyoruz ve alt satıra geçiyoruz
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
