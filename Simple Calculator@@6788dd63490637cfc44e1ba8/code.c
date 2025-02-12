#include <stdio.h>
int main(){
    int a,b;
    char choice;
    scanf("%d %d %c",&a,&,&choice);
    switch(choice){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        if (b!=0){
            printf("%d",a/b);
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