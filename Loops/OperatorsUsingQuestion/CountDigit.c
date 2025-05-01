#include<stdio.h>
int main(){
    int n;
    printf("Enter the value you want to know digit : ");
    scanf("%d", &n);
    int count = 0;
    while(n!=0)
    {
    n=n/10;
    count++;
} 
    printf("The digits are %d", count);
    return 0;
}