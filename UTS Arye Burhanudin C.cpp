#include <stdio.h>
#include <stdlib.h>

// Mendefinisikan konstanta untuk level kekeruhan air
#define LEVEL_1 6
#define LEVEL_2 8
#define LEVEL_3 12
#define LEVEL_4 18
#define LEVEL_5 24
#define LEVEL_6 30
#define LEVEL_7 36
#define LEVEL_8 42
#define LEVEL_9 49

// Mendefinisikan konstanta untuk kecepatan motor listrik utama (rpm)
#define SPEED_1 1000
#define SPEED_2 2000

// Mendefinisikan konstanta untuk waktu mencuci (menit)
#define TIME_1 60
#define TIME_2 2
#define TIME_3 3

// Mendefinisikan fungsi untuk mengaktifkan motor listrik pembuka klep pengisian air
void open_water_inlet() {
    printf("Motor listrik pembuka klep pengisian air aktif selama %d menit sampai air penuh\n", TIME_2);
}

// Mendefinisikan fungsi untuk mengaktifkan motor listrik pembuka klep pembuangan air kotor
void open_water_outlet() {
    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama %d menit sampai air kotor habis\n", TIME_2);
}

// Mendefinisikan fungsi untuk mengaktifkan motor listrik utama dengan kecepatan dan waktu tertentu
void spin_motor(int speed, int time) {
    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama %d menit\n", speed, time);
}

// Mendefinisikan fungsi untuk mendeteksi level kekeruhan air dengan sensor turbidimeter
int detect_turbidity() {
    // Membuat array berdimensi satu untuk menyimpan level kekeruhan air
    int turbidity_levels[] = {LEVEL_1, LEVEL_2, LEVEL_3, LEVEL_4, LEVEL_5, LEVEL_6, LEVEL_7, LEVEL_8, LEVEL_9};

    // Mengambil nilai acak dari array sebagai level kekeruhan air yang terdeteksi
    int index = rand() % 9;
    int turbidity = turbidity_levels[index];

    // Menampilkan level kekeruhan air yang terdeteksi
    printf("Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air\n");
    printf("Level kekeruhan air yang terdeteksi adalah %d NTU\n", turbidity);

    // Mengembalikan level kekeruhan air yang terdeteksi
    return turbidity;
}

// Mendefinisikan fungsi untuk mencuci secara otomatis dengan sistem fuzzy
void fuzzy_wash() {
    // Menekan tombol start
    printf("Tombol start ditekan\n");

    // Mengaktifkan motor listrik pembuka klep pengisian air
    open_water_inlet();

    // Mendeteksi level kekeruhan air dengan sensor turbidimeter
    int turbidity = detect_turbidity();

    // Menghitung level rata-rata kekeruhan air
    int average_turbidity = (turbidity + LEVEL_1) / 2;

    // Menghitung waktu pertama dan kedua untuk mencuci
    int first_time = TIME_1 / 2 - TIME_2 - TIME_3;
    int second_time = TIME_1 - first_time - TIME_2 - TIME_3;

    // Mengaktifkan motor listrik utama dengan kecepatan dan waktu pertama sesuai level rata-rata kekeruhan air
    spin_motor(SPEED_1, first_time);

    // Mengaktifkan motor listrik pembuka klep pembuangan air kotor
    open_water_outlet();

    // Mengaktifkan motor listrik utama dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    spin_motor(SPEED_2, TIME_3);

    // Mengaktifkan motor listrik pembuka klep pengisian air
    open_water_inlet();

    // Mengaktifkan motor listrik utama dengan kecepatan dan waktu kedua sesuai level rata-rata kekeruhan air
    spin_motor(SPEED_1, second_time);

    // Mengaktifkan motor listrik pembuka klep pembuangan air kotor
    open_water_outlet();

    // Mengaktifkan motor listrik utama dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    spin_motor(SPEED_2, TIME_3);

    // Menampilkan pesan bahwa pencucian selesai
    printf("Pencucian selesai\n");
}

// Fungsi utama program
int main() {
    // Memanggil fungsi untuk mencuci secara otomatis dengan sistem fuzzy
    fuzzy_wash();

    // Mengembalikan nilai 0 sebagai indikasi program berakhir dengan sukses
    return 0;
}
