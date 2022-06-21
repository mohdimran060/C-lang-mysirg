#include<stdio.h>

int main(){

    int n1,n2,n3;
    printf("Enter three number among three \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>=n2 && n1>n3)
    {
        printf(" %d is the greatest number among three \n",n1);

    }

    if (n2>n3 && n2>n1)
    {
        printf(" %d is the greatest number among three \n",n2);
    }

    if (n3>n1 && n3>n2)
    {
        printf(" %d is the greatest number among three \n",n3);        
    }
    
    
    
}