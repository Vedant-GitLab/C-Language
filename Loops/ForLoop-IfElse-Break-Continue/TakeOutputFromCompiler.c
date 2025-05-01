#include<stdio.h>
int main(){
    int n;
    printf("Enter a number you want to repeat : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        printf("Hello world\n");
    }
    return 0;
}