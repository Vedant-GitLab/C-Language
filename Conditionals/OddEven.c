#include<stdio.h>
int main(){
int x;
printf("Enter a number = ");
scanf("%d", &x);
if (x%2==0) {
    printf("Even Number");
}
// if (x%2!=0) printf("Odd Number");
else{
printf("Odd Number");
}
    return 0;
}