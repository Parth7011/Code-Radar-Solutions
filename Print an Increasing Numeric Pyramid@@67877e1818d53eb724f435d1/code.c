#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}

