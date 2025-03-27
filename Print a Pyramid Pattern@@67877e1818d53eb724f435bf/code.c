#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Printing spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");  // Printing spaces
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
