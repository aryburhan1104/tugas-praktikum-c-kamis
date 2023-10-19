#include <stdio.h>
#include <math.h> // Untuk menggunakan fungsi sqrt (akar kuadrat)

int main()
{
    // Deklarasi variabel untuk menyimpan sisi alas, sisi tinggi dan sisi miring
    int sisi_alas = 4; // Sisi alas dalam cm
    int sisi_tinggi = 5; // Sisi tinggi dalam cm
    float sisi_miring; // Sisi miring dalam cm

    // Menghitung sisi miring dengan rumus Phitagoras
    // sisi_miring^2 = sisi_alas^2 + sisi_tinggi^2
    // sisi_miring = sqrt(sisi_alas^2 + sisi_tinggi^2)
    sisi_miring = sqrt(sisi_alas * sisi_alas + sisi_tinggi * sisi_tinggi);

    // Cetak sisi miring ke layar dengan format tertentu
    printf("Sisi miring segitiga siku-siku dengan sisi alas %d cm dan sisi tinggi %d cm adalah %.2f cm\n", sisi_alas, sisi_tinggi, sisi_miring);

    return 0;
}
