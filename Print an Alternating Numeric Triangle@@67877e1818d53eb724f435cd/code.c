#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Row loop
        for (int j = 1; j <= i; j++) {  // Column loop
            printf("%d ", (i + j) % 2);  // Alternate between 1 and 0
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
