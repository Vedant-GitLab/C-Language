#include<stdio.h>
int main(){
    int x;
    printf("Enter a integer no : ");
    scanf("%d", &x);
    // typecasting
    float f = (float)x;
    printf("The half of the num. is = %f", f/2);
}