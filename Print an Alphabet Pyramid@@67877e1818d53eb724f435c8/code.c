#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Row loop
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Alphabet loop
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
