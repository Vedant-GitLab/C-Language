#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n-1;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=nsp; j=j+2){
    printf(" \n",nsp);
        }

        printf("*\n", nst);
    }
    return 0;
}