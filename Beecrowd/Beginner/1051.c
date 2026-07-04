#include<stdio.h>
int main()
{
   float a,tax=0;
   scanf("%f",&a);
   if(a<=2000){printf("Isento\n");return 0;}
   if(4500<a){
    tax=(a-4500)*0.28;
    a=4500;}
   if(a>3000){
    tax=tax+(a-3000)*0.18;
    a=3000;}
   if(a>2000){
    tax=tax+(a-2000)*0.08;
   }
    printf("R$ %.2f\n",tax);
    return 0;
}
