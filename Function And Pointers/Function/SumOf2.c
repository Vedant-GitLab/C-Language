#include<stdio.h>
int add (int a, int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    int sum = add(a,b);
    printf("sum of no is %d", sum);
    return 0;
}