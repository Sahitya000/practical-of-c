#include<stdio.h>
int main()
{
    int num,fact=1,i;;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of no. %d",fact);
    return 0;
}
