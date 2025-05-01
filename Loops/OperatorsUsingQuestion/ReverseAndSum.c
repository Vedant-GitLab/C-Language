#include<Stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int lastdigit = 0;
    int reverse = 0;
    int original = n; 
    // save the original number
    int sum = 0;
    while(n!=0) {
        lastdigit = n%10;
        reverse = reverse*10+lastdigit ;
        n=n/10;
    }
    // add original number and reverse number
    sum = original + reverse;
    
    printf("The original nnumber is %d\n", original);
    printf ("The reverse num is %d\n", reverse);
    printf("The sum is %d", sum);
    return 0;
}