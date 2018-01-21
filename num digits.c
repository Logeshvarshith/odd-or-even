#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter an int: ");
    scanf("%lld", &n);
while(n != 0)
    {
    n /= 10;
        ++count;
        }
        printf("Num of digits: %d", count);
}
