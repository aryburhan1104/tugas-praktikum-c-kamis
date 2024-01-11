#include <stdio.h>
#define MAX 12 // ukuran maksimal array C

int main() {
  // deklarasi dan inisialisasi array A dan B
  int A[5] = {12, 8, 17, 5, 15};
  int B[7] = {5, 11, 7, 25, 9, 12, 14};

  // deklarasi array C
  int C[MAX];

  // variabel untuk menyimpan indeks array
  int i, j, k;

  // menyalin nilai dari array A dan B ke array C sesuai dengan kondisi a
  j = 0; // indeks array A
  k = 0; // indeks array B
  for (i = 0; i < MAX; i++) {
    // jika indeks array C genap
    if (i % 2 == 0) {
      // mencari nilai array A yang lebih besar dari 10
      while (j < 5 && A[j] <= 10) {
        j++; // menambah indeks array A
      }
      // jika indeks array A masih valid
      if (j < 5) {
        // menyalin nilai array A ke array C
        C[i] = A[j];
        j++; // menambah indeks array A
      }
      // jika tidak, array C diisi dengan 0
      else {
        C[i] = 0;
      }
    }
    // jika indeks array C ganjil
    else {
      // mencari nilai array B yang lebih besar dari 10
      while (k < 7 && B[k] <= 10) {
        k++; // menambah indeks array B
      }
      // jika indeks array B masih valid
      if (k < 7) {
        // menyalin nilai array B ke array C
        C[i] = B[k];
        k++; // menambah indeks array B
      }
      // jika tidak, array C diisi dengan 0
      else {
        C[i] = 0;
      }
    }
  }

  // menampilkan isi array C untuk kondisi a
  printf("Isi array C untuk kondisi a adalah:\n");
  for (i = 0; i < MAX; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  // menyalin nilai dari array A dan B ke array C sesuai dengan kondisi b
  j = 0; // indeks array A
  k = 6; // indeks array B
  for (i = 0; i < MAX; i++) {
    // jika indeks array C kurang dari 3
    if (i < 3) {
      // mencari nilai array A yang lebih besar dari 10
      while (j < 5 && A[j] <= 10) {
        j++; // menambah indeks array A
      }
      // jika indeks array A masih valid
      if (j < 5) {
        // menyalin nilai array A ke array C
        C[i] = A[j];
        j++; // menambah indeks array A
      }
      // jika tidak, array C diisi dengan 0
      else {
        C[i] = 0;
      }
    }
    // jika indeks array C lebih dari 7
    else if (i > 7) {
      // mencari nilai array B yang lebih besar dari 10
      while (k >= 0 && B[k] <= 10) {
        k--; // mengurangi indeks array B
      }
      // jika indeks array B masih valid
      if (k >= 0) {
        // menyalin nilai array B ke array C
        C[i] = B[k];
        k--; // mengurangi indeks array B
      }
      // jika tidak, array C diisi dengan 0
      else {
        C[i] = 0;
      }
    }
    // jika indeks array C antara 3 dan 7
    else {
      // array C diisi dengan 0
      C[i] = 0;
    }
  }

  // menampilkan isi array C untuk kondisi b
  printf("Isi array C untuk kondisi b adalah:\n");
  for (i = 0; i < MAX; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  return 0;
}