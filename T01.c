#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    char nama_menu[100][30];
    int porsi[100];
    int harga[100];
    int subtotal[100];

    int total = 0;
    int i = 0;

    while (1) {
        printf("Masukkan kode menu: ");
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        printf("Masukkan porsi: ");
        scanf("%d", &porsi[i]);

        if (strcmp(kode, "NGS") == 0) {
            strcpy(nama_menu[i], "Nasi Goreng");
            harga[i] = 15000;
        } 
        else if (strcmp(kode, "AP") == 0) {
            strcpy(nama_menu[i], "Ayam Penyet");
            harga[i] = 20000;
        } 
        else if (strcmp(kode, "GG") == 0) {
            strcpy(nama_menu[i], "Gado-Gado");
            harga[i] = 18000;
        } 
        else {
            printf("Kode tidak valid!\n");
            continue;
        }

        subtotal[i] = harga[i] * porsi[i];
        total += subtotal[i];
        i++;
    }

    // ===== STRUK =====
    printf("\nMenu               Porsi     Harga     Total\n");
    printf("====================================================\n");

    for (int j = 0; j < i; j++) {
        printf("%-18s %-8d %-9d %-9d\n",
               nama_menu[j],
               porsi[j],
               harga[j],
               subtotal[j]);
    }

    printf("====================================================\n");
    printf("%-35s %d\n", "Total Pembayaran", total);

    // ===== SISTEM KUPON & DISKON =====
    float diskon_persen = 0;
    char kupon[20] = "Tidak ada";

    if (total >= 500000) {
        diskon_persen = 25;
        strcpy(kupon, "Hitam");
    }
    else if (total >= 400000) {
        diskon_persen = 20;
        strcpy(kupon, "Hijau");
    }
    else if (total >= 300000) {
        diskon_persen = 15;
        strcpy(kupon, "Merah");
    }
    else if (total >= 200000) {
        diskon_persen = 10;
        strcpy(kupon, "Kuning");
    }
    else if (total >= 100000) {
        diskon_persen = 5;
        strcpy(kupon, "Biru");
    }

    if (diskon_persen > 0) {
        int potongan = total * diskon_persen / 100;
        int total_setelah = total - potongan;

        printf("%-35s %s (%0.f%%)\n", "Kupon", kupon, diskon_persen);
        printf("%-35s %d\n", "Potongan", potongan);
        printf("%-35s %d\n", "Total Setelah Diskon", total_setelah);
    }
    else {
        printf("%-35s %s\n", "Kupon", kupon);
    }

    return 0;
}