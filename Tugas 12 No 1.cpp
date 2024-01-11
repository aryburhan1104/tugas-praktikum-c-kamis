#include <stdio.h>

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int i, j, ada = 0;

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                ada = 1;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (ada) {
            break;
        }
    }

    if (!ada) {
        printf("TIDAK ADA\n");
    }

    return 0;
}