#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a||b;
    b=a&&b;
    a=b&&a;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}