#include<Stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int lastdigit = 0;
    int sum = 0;
   
    while(n!=0) {
        lastdigit = n%10;
        if(lastdigit%2 == 0){
        sum = sum + lastdigit;
    }
        n=n/10;
    }
    printf ("The sum is %d", sum);
    return 0;
}