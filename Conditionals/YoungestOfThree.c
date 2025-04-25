#include<stdio.h>
int main(){
    int Ram;
    printf("Enter the age of Ram = ");
    scanf("%d", &Ram);
    int Shyam;
    printf("Enter the age of Shyam = ");
    scanf("%d", &Shyam);
    int Ajay;
    printf("Enter the age of Ajay = ");
    scanf("%d", &Ajay);
    if (Ram<Shyam){
        if(Ram<Ajay) printf("Ram is younger");
        else //Ajay>Shyam>Ram
            printf("Ajay is younger");
        }
        else{
            if (Shyam<Ram) printf("Shyam is younger");
            else //Ajay>Shyam>Ram
            printf("Ajay is younger");
        }
    
    return 0;
}