// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number  : ");
//     scanf("%d", &n);
//     int a = 1;
//     int b = 1;
//     int sum = 1;
//     for (int i = 1; i<=n-2; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//     }
//     printf("The %dth fibnocci is %d", n, sum);
//     return 0;
// }




#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms : ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}