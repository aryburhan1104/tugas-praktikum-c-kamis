#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan alas, tinggi dan luas
    int alas = 8; // Alas dalam cm
    int tinggi = 5; // Tinggi dalam cm
    int luas; // Luas dalam cm^2

    // Menghitung luas dengan rumus luas = (alas * tinggi) / 2
    luas = (alas * tinggi) / 2;

    // Cetak luas ke layar dengan format tertentu
    printf("Luas segitiga dengan alas %d cm dan tinggi %d cm adalah %d cm^2\n", alas, tinggi, luas);

    return 0;
}
