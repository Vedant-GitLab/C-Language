// HW : Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 193 = (1 *1 *1) + 5 * 5 * 5) + (3*3*3)
#include<stdio.h>

int main() {
   int originalNum, remainder, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (int i = 1; i <= 500; i++) {
        originalNum = i;
        sum = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
