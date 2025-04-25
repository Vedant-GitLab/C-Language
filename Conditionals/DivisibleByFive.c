#include<stdio.h>
int main(){
    int x;
    printf("Enter a number = ");
    scanf("%d", &x);
    // if (x%5==0) printf("It is divisible by five");
    // if (x%5!=0) printf("It is not divisible by five");
    if (x%5==0) {
        printf("It is divisible by five");
    }
    else {
        printf("It is not divisible by five");
    }
    return  0;
}