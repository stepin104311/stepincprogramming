#include <stdio.h>
#include <stdlib.h>

int prime(int);
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int num){
    int i,flag=0;
    if(num==1)
        printf("neither prime nor composite");
    else{
        for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
           {
               flag=1;
               break;
           }
    }
    if(flag==1)
         printf("false");
    else
        printf("true");
    }
    return 0;
}
