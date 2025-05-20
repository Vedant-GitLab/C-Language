#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        // no of line / rows
        // no of coolumns
        for (int j=i; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
