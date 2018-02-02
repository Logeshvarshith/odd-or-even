#include<stdio.h>
void swap(int *x,int *y)
{
    int a=8;
    int b=65;
    printf("value of i=%d k=%d before swapping", a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of i=%d k=%d before swapping", a,b);
}
