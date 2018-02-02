#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 int main()
{
    int a, b;
    printf("Enter Value of a ");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
    return 0;
}
