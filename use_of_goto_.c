#include <stdio.h>
void main()
{
    int n,f=1;
    printf("enter any number:");
    scanf("%d",&n);
    fact:
    if(n>0)
    {
        f=f*n;
        n--;
        goto fact;
    }
printf("%d",f);

}
