#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a**2;
    if (c==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}