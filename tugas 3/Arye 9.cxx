#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan bilangan yang diinput
    int bilangan;

    // Input bilangan dari pengguna dengan fungsi scanf
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Cek apakah bilangan adalah genap atau ganjil dengan operator modulo %
    // Jika sisa pembagian bilangan dengan 2 adalah 0, maka bilangan adalah genap
    // Jika sisa pembagian bilangan dengan 2 adalah 1, maka bilangan adalah ganjil
    if (bilangan % 2 == 0)
    {
        // Cetak keterangan "GENAP" ke layar dengan fungsi printf
        printf("Bilangan %d adalah GENAP\n", bilangan);
    }
    else
    {
        // Cetak keterangan "GANJIL" ke layar dengan fungsi printf
        printf("Bilangan %d adalah GANJIL\n", bilangan);
    }

    return 0;
}
