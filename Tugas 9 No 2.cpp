#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0, found = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &C);

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            found = 1;
            count++;
        }
    }

    if (found) {
        printf("ADA\n%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}