#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Row loop
        for (int j = 1; j <= N - i; j++) {  // Space loop
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {  // Number loop
            printf("%d ", k);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
