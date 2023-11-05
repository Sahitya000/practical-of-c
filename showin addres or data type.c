#include<stdio.h>
int main()
{
    int v1;
    float v2;
    char v3;
    int *p1;
    float *p2;
    char *p3;
    v1=11;
    v2=3.14;
    v3='y';
    p1=&v1;
    p2=&v2;
    p3=&v3;
    printf("address of v1=%u\n",&v1);
    printf("value is%d",*p1);
    printf("\naddress of v2=%u\n",&v2);
    printf("")
