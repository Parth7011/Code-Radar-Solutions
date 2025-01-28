#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);

    if ((a % 4 == 0 && a % 100 != 0)||(a % 400 == 0))
    {
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    printf("%s", welcome());
    return 0;
}