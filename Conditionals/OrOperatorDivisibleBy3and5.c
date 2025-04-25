#include<stdio.h>
int main(){
    int x;
    printf("Enter A Three Digit Number = ");
    scanf("%d", &x);
    // || is stands for or
    if (x%5==0 || x%3==0)
    printf("It Is Divisible By 5 Or 3");
    else{
        printf("It Is Not Divisible By 5 Or 3");
    }
    return 0;
}