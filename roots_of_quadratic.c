// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,x1,x2;
    printf("enter coefficient ofx^2 = ");
    scanf("%f",&a);
    printf("enter coefficient ofx = ");
    scanf("%f",&b);
    printf("enter coefficient of constant = ");
    scanf("%f",&c);
    d=b*b-(4*a*c);
    printf("\ndetermenat =  %f",d);
    if(d<0)
    printf("\nroots are imagnary");
    
    if(d==0)
    x=-b*(2.0*a);
    printf("\nroots are equal",x);
    
    if(d>0)
    printf("\nroots are distinct ");
    x1=(-b+sqrt (d))/(2*a);
    x2=(-b-sqrt (d))/(2*a);
printf("\nroots are\nx1 = %f,\n,x2 = %f",x1,x2);
    return 0;
}
