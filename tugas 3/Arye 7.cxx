#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan suhu dalam Celcius, Fahrenheit dan Reamur
    int celcius; // Suhu dalam Celcius
    float fahrenheit; // Suhu dalam Fahrenheit
    float reamur; // Suhu dalam Reamur

    // Input suhu dalam Celcius dari pengguna dengan fungsi scanf
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &celcius);

    // Menghitung suhu dalam Fahrenheit dengan rumus Fahrenheit = (Celcius * 9/5) + 32
    fahrenheit = (celcius * 9.0/5.0) + 32;

    // Menghitung suhu dalam Reamur dengan rumus Reamur = Celcius * 4/5
    reamur = celcius * 4.0/5.0;

    // Cetak suhu dalam Fahrenheit dan Reamur ke layar dengan format tertentu
    printf("Suhu dalam Fahrenheit adalah %.2f derajat\n", fahrenheit);
    printf("Suhu dalam Reamur adalah %.2f derajat\n", reamur);

    return 0;
}
