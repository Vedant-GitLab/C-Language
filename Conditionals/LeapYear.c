#include<stdio.h>
int main(){
int x;
printf("Enter a number = ");
scanf("%d", &x);
if (x%400==0 || (x%4==0 && x%100!=0))
printf("This year is a leap year");
else{
    printf("This year is not a leap year");
}
    return 0;
}