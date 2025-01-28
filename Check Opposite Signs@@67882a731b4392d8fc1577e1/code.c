#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a &b);
    ((a > 0 && b < 0)||(a < 0 && b > 0))?
    printf("True\n"):
    printf("False\n");
 
    return 0;
}