#include<stdio.h>
int main(){
int x;
printf("Enter a number = ");
scanf("%d", &x);
if ((x%5==0 || x%3==0) && x%15!=0)
printf("Divisible by 3 or 5");
else{
    printf(" Not Divisible by 3 or 5");
}
    return 0;
}