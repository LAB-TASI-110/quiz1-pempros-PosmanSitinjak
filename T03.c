#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    char asrama[50];
    int pilihan;
    int total_pakaian;
    float berat, harga_perkg, total;
    char ulang;

    do {
        printf("\n=====================================\n");
        printf("         SISTEM LAUNDRY DEL          \n");
        printf("=====================================\n");

        // Input Nama
        printf("Masukkan Nama Pelanggan  : ");
        scanf(" %[^\n]", nama);

        // Input Asrama
        printf("Masukkan Asrama          : ");
        scanf(" %[^\n]", asrama);

        // Input Total Pakaian
        printf("Masukkan Total Pakaian (pcs) : ");
        scanf("%d", &total_pakaian);

        // Menu Layanan
        printf("\n===== PILIH JENIS LAYANAN =====\n");
        printf("1. Cuci Kering    - Rp 5000/kg\n");
        printf("2. Cuci Setrika   - Rp 7000/kg\n");
        printf("3. Setrika Saja   - Rp 4000/kg\n");
        printf("Masukkan Pilihan (1/2/3): ");
        scanf("%d", &pilihan);

        // Input Berat
        printf("Masukkan Berat Cucian (kg): ");
        scanf("%f", &berat);

        // Tentukan harga
        if (pilihan == 1) {
            harga_perkg = 5000;
        } else if (pilihan == 2) {
            harga_perkg = 7000;
        } else if (pilihan == 3) {
            harga_perkg = 4000;
        } else {
            printf("Pilihan tidak valid!\n");
            harga_perkg = 0;
        }

        total = berat * harga_perkg;

        // Cetak Struk
        printf("\n========== STRUK PEMBAYARAN ==========\n");
        printf("Nama Pelanggan   : %s\n", nama);
        printf("Asrama           : %s\n", asrama);
        printf("Total Pakaian    : %d pcs\n", total_pakaian);
        printf("Berat Cucian     : %.2f kg\n", berat);
        printf("Harga per kg     : Rp %.0f\n", harga_perkg);
        printf("Total Bayar      : Rp %.0f\n", total);
        printf("=======================================\n");

        printf("\nInput transaksi lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("\nTerima kasih telah menggunakan Laundry Del!\n");

    return 0;
}