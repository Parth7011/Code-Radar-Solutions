#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b=2c)||(b+c=2a)||(a+c=2b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}