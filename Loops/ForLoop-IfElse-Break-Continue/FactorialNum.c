#include<stdio.h>
int main(){
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i=1; i<=n; i++){
        factorial = factorial * i;
    }
    printf("The factorial of the given no. is %d", factorial);
    return 0;
}