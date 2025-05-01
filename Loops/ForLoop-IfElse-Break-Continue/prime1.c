#include<stdio.h>
int main(){
    int num , i,isprime;
    for(num=1; num<=10; num++){
        isprime =1;
        for(i=2;i*i<num; i++){
            if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("%d ",num);
    }
}
    return 0;
}
