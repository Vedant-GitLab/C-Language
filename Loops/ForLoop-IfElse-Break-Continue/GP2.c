     #include<stdio.h>
    int main(){
    int n; 
    printf("Enter a Number : ");
    scanf("%d", &n);           
    // 1 2 4 8 16 32......n terms tk
    // int a = 1;
    // for(int i=1; i<=n; i++) {
    //     printf("%d ",a);
    //     a = a*2;
    // }





    //  100 97 94 91......n terms tk
    int a = 100;
    for(int i=1; a>0; i++) {
        printf("%d ",a);
        a = a*1/2;
    }
  
    return 0;
}