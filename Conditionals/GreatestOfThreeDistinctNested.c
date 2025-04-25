#include<stdio.h>
int main(){
    int a;
    printf("Enter first number = ");
    scanf("%d", &a);
    int b;
    printf("Enter second number = ");
    scanf("%d", &b);
    int c;
    printf("Enter third number = ");
    scanf("%d", &c);
    if( a>b) {
        if (a>c) printf("%d is greatest", a);
        else // a>b>c
        printf("%d is greatest", c);
    }
    else { //b>a
        if (b>c)
        printf("%d is greatest", b);


    
    else //c>b>a
    
        printf("%d is greatest", c);
    }
    return 0;
}