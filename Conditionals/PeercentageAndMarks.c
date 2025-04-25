#include<stdio.h>
int main(){
int x;//percentage
printf("Enter Percentage = ");
scanf("%d", &x);
//with multiple conditions
// if (x>=61 && x<=80) printf("Good");
// if (x>=41 && x<=60) printf("Average");
// if (x>=81 && x<=100) printf("Very Good");
// if (x<=40) printf("Fail");


//without multiple conditions
if (x>=81)
    printf("very Good");
    else {//x<81
        if (x>=61) printf("Good");
        else {//x<=61
            if (x>=41) printf("Average");
            else {//x<=40
            printf("Fail");    
            }
        
        }
}

    return 0;
}