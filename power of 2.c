#include <stdio.h>
int main()
{
int base, exp;
long long result = 1;
printf("Enter a base num: ");
    scanf("%d", &base);
printf("Enter an exp: ");
    scanf("%d", &exp);
while (exp != 0)
    {
        result *= base;
        --exp;
    }
printf("Answer = %lld", result);
return 0;
}
