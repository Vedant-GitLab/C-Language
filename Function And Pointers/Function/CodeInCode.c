#include<stdio.h>
void England(){
    printf("You are in England\n"); //6
    return; //7
}
void Australia(){
    printf("You are in Australia\n"); //4
    England(); //Calling england  //5
    return; //8
}
void India(){
    printf("you are in India\n"); //2
    Australia(); //Calling australia  //3
    return; //9
}
int main(){
    India(); //Calling India  //1
    return 0; //10
}

