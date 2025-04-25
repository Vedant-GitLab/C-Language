#include<stdio.h>
int main(){
    int x;
    printf("Enter A Three Digit Number = ");
    scanf("%d", &x);
    // && is stands for and
    if (x>99 && x<1000)
    printf("It Is A Three Digit Number");
    else{
        printf("It Is Not A Three Digit Number");
    }
    return 0;
}