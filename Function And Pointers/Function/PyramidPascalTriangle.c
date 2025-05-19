#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i = 2; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        // Print spaces
        for(int space = 0; space < n - i; space++){
            printf("  ");  // 2 spaces for better alignment
        }

        // Print numbers
        for(int j = 0; j <= i; j++){
            int icj = combination(i, j);
            printf("%4d", icj); // print with 4 spaces for neat format
        }
        printf("\n");
    }

    return 0;
}
