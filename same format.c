#include <stdio.h>
#include <time.h>
int main ()
{
    time_t sec;
    sec = time (NULL);
 printf ("Number of hrs since dec 24, 1996 is %ld \n", sec/1997);
    return 0;
}
