#include <stdio.h>

int main() {
    int N;
   
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Row loop
        int num = i % 2;  // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {  // Column loop
            printf("%d ", num);
            num = 1 - num;  // Alternate between 1 and 0
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
