#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz

int main() {
    int i, j;  // Kullanıcıdan alınacak iki sayı için 'i' ve 'j' değişkenlerini tanımlıyoruz

    // Kullanıcıdan ilk sayıyı girmesini istiyoruz
    printf("Lutfen Ilk Sayiyi Giriniz: ");
    scanf("%d", &i);  // Girilen sayıyı 'i' değişkenine atıyoruz

    // Kullanıcıdan ikinci sayıyı girmesini istiyoruz
    printf("Lutfen Ikinci Sayiyi Giriniz: ");
    scanf("%d", &j);  // Girilen sayıyı 'j' değişkenine atıyoruz

    // Eğer ilk sayı ikinci sayıdan büyükse, yerlerini değiştiriyoruz
    if (i > j) {
        int temp;  // Geçici değişken tanımlıyoruz
        temp = i;  // 'i' değerini geçici değişkene atıyoruz
        i = j;     // 'j' değerini 'i'ye atıyoruz
        j = temp;  // Geçici değişkendeki değeri 'j'ye atıyoruz
    }

    // i'den j'ye kadar (dahil) olan tüm sayıları ekrana yazdırıyoruz
    for (; i <= j; i++) {
        printf("%d ", i);  // Sayıları aynı satırda aralarına boşluk koyarak yazdırıyoruz
    }

    return 0;  // Programı başarıyla sonlandırıyoruz
}
