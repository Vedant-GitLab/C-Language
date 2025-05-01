#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        // Printing spaces
        for(int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        int val = 1;
        for(int j = 0; j <= i; j++) {
            printf("%4d", val); // Print value with proper width
            val = val * (i - j) / (j + 1); // Calculate next value
        }
        printf("\n");
    }

    return 0;
}
