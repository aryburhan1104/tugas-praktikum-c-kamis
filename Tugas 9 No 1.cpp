#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i, found = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Array A: ");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
        if (A[i] == N) {
            found = 1;
            printf("\nADA\nLokasi bilangan yang sama: ");
            break;
        }
    }

    for (; i < 11; i++) {
        if (A[i] == N) {
            printf("%d ", i);
        }
    }

    if (!found) {
        printf("\nTIDAK ADA\n");
    }

    return 0;
}