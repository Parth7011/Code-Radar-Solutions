#include <stdio.h>
int main(){
    float a,b;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice){
        case '+':
        printf("%.0f",a+b);
        break;

        case '-':
        printf("%.0f",a-b);
        break;

        case '*':
        printf("%.0f",a*b);
        break;

        case '/':
        if (b!=0){
            printf("%.2f",a/b);
        }
        else{
            printf("error");
        }
        break;

        default:
        printf("error");
    }
    return 0;

}