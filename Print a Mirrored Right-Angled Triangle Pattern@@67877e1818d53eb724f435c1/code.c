#include <stdio.h>

int main() {
    int N;
   
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) { //ye loop spaces print krne ke liye hai
            printf(" "); 
        }
        for (int k = 1; k <= i; k++) {
            printf("*"); 
        }
        printf("\n");
    }

    return 0;
}
