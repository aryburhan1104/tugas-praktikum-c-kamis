#include <stdio.h>

int main() {
     char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int count[26] = {0};  // Mewakili huruf A-Z
    int maxCount = 0, maxIndex = 0;

    for (int i = 0; i < 11; i++) {
        if (A[i] != '\0') {
            count[A[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxIndex = i;
        }
    }

    printf("Huruf yang terbanyak: %c\nJumlah: %d\n", 'A' + maxIndex, maxCount);

    return 0;
}