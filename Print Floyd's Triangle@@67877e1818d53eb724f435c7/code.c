#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Row loop
        for (int j = 1; j <= i; j++) {  // Column loop
            printf("%d ", num);
            num++;  // Increment number
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
