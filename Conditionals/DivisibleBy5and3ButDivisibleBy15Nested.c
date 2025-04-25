#include<stdio.h>
int main() {
    int x;
    printf("Enter a number = ");
    scanf("%d", &x);
    // 5 or 3 but not 15
    if (x%15!=0){
        if (x%3!=0){
            if (x%5==0)  printf("Condition Valid");
            else printf("Condition not valid");
        }
        else 
        printf("condition valid");
    }
    else
    printf("condition not valid");
    return 0;
}