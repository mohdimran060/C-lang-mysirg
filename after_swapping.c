#include<stdio.h>

int main(){

    int a,b;

     printf("Enter your value before swapping \n");
    scanf("%d\n%d",&a,&b);

   a=b-a;
   b=b-a;
   a=a+b;
    printf("Value after swapping \n%d \n%d",a,b);
}