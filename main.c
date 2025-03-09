#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 50  // Sat�r ba��na maksimum karakter say�s�
#define DATA_FILE "trafik_kodlari.txt"  // Veri dosyas�n�n ad�

// Kullan�c�n�n girdi�i trafik koduna g�re �ehir ad�n� bulan fonksiyon
void find_city_by_code(const char *code) {
    FILE *file = fopen(DATA_FILE, "r");  // Dosyay� okuma modunda a�
    if (file == NULL) {
        printf("Dosya a�ma hatas�!\n");  // Dosya a��lamazsa hata mesaj� ver
        return;
    }

    char line[MAX_LINE_LENGTH];  // Her sat�r� tutacak dizi
    char city[30];  // �ehir ismini saklayacak dizi
    char file_code[10];  // Trafik kodunu saklayacak dizi
    int found = 0;  // E�le�me olup olmad���n� kontrol eden de�i�ken

    // Dosyadaki sat�rlar� tek tek oku
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%s %s", city, file_code);  // Sat�rdan �ehir ad� ve kodu ay�r
        if (strcmp(file_code, code) == 0) {  // Girilen kod ile dosyadaki kod e�le�iyor mu kontrol et
            printf("%s Do�u Karadeniz b�lgesinde yer al�r\n", city);
            found = 1;  // E�le�me bulundu
            break;  // Daha fazla aramaya gerek yok, d�ng�den ��k
        }
    }

    if (!found) {  // E�er hi� e�le�me bulunamad�ysa hata mesaj� yazd�r
        printf("Hatal� Kod Girdiniz\n");
    }

    fclose(file);  // Dosyay� kapat
}

int main() {
    char input_code[10];  // Kullan�c�dan al�nacak trafik kodunu saklayacak dizi
    printf("Trafik kodunu giriniz: ");  // Kullan�c�dan giri� al
    scanf("%s", input_code);  // Girilen kodu oku

    find_city_by_code(input_code);  // Fonksiyonu �a��rarak kodu i�le

    return 0;  // Program� ba�ar�yla sonland�r
}
