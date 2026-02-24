#include <stdio.h>

int main() {
    int N;
    int nilai[100];
    int kode_kelompok;
    int total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    printf("Masukkan deret nilai:\n");
    for(int i = 0; i < N; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("Masukkan kode kelompok (1 = Genap, 2 = Ganjil): ");
    scanf("%d", &kode_kelompok);

    for(int i = 0; i < N; i++) {

        // posisi manusia = i + 1
        int posisi = i + 1;

        if(kode_kelompok == 1 && posisi % 2 == 0) {
            total += nilai[i];
        }
        else if(kode_kelompok == 2 && posisi % 2 != 0) {
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %d = %d\n", kode_kelompok, total);

    return 0;
}