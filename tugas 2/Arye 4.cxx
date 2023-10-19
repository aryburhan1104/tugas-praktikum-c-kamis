// Program untuk menghitung dan menampilkan isi (volume) dari bangun ruang bola
#include <stdio.h>
#include <math.h>

// Mendefinisikan konstanta PI sebagai 3.14
#define PI 3.14

int main()
{
    // Mendeklarasikan variabel untuk diameter dan jari-jari bola
    float d, r;

    // Mendeklarasikan variabel untuk menyimpan hasil perhitungan volume bola
    float V;

    // Memberikan nilai diameter bola sebagai 15 cm
    d = 15;

    // Menghitung jari-jari bola dengan rumus r = d / 2
    r = d / 2;

    // Menghitung volume bola dengan rumus V = (4/3) * PI * r^3
    V = (4.0/3.0) * PI * pow(r, 3);

    // Menampilkan hasil perhitungan volume bola dengan format %.2f untuk dua angka di belakang koma
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", d, V);

    return 0;
}
