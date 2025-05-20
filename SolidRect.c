#include<stdio.h>
int main (){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    // **********...... upto n no. of stars
    for (int i=1; i<=n; i++){   
        for (int i=1; i<=m; i++){
            printf("*");
        }
         // outer loop --> no of lines
        // inner loop --> no of stars in line
        printf("\n");
        // har line k baad enter marne k liye
    }
    return 0;
}