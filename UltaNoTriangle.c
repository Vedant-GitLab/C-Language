#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i=i+2){
        // no of line / rows
        // no of coolumns
        for (int j=i; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}