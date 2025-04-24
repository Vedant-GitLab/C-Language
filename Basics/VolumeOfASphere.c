#include<stdio.h>
int main(){
    //V = 4/3 pi*r*r*r
    float r = 13;
    float pi = 3.14;
    float volume = (4.0/3.0)*pi*r*r*r;
    printf("The volume of sphere is = %f", volume);
    return 0;
}