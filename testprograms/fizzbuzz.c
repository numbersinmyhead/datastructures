#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{



#if 0
    for (int i = 0; i < 100; i++)
    {
        if ( i == 0)
            continue;
        if (i % 3 == 0 && i % 5 == 0)
           printf ("fizzbuzz\n");
        else if (i % 3 == 0)
            printf ("fizz\n");
        else if (i % 5 == 0)
            printf ("buzz\n");
        else
            printf("%d\n", i);
    }
#endif
    return 0;
}

