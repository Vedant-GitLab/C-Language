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
    if(a>=b && a>=c)
    printf("%d is the greatest number", a);
    if(b>=a && b>=c)
    printf("%d is the greatest number", b);
    if (c>=a && c>=b)
    printf("%d is the greatest number", c);
    return 0;
}