#include<stdio.h>
int main(){
   int n;
   printf("Enter n : ");
   scanf("%d",&n); 
   int r;
   printf("Enter r : ");
   scanf("%d",&r); 
   int nfact=1; //n!
   int rfact=1; //r!
   int nrfact=1; //n-r!
   for (int i=2; i<=n; i++){
       nfact = nfact*i;
   }
   for (int i=2; i<=r; i++){
       rfact = rfact*i;
   }
   for (int i=2; i<=n-r; i++){
       nrfact = nrfact*i;
   }
   int ncr = nfact/(rfact*nrfact); //Ncr = n!/(r!*n-r!)
   printf("The NCR value is %d",ncr);
   return 0;
}