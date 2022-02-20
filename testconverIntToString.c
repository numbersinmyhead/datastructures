#include <stdio.h>
#include <stdlib.h>

char *solution(int number);
int findlen(int number);

int main(int argc, char **argv)
{
    char *res = solution (965);
    printf ("\nResult:%s.\n", res);
    printf ("-------------------------------------\n\n");
    free (res);

    //res = solution (-965);
    //printf ("\nResult:%s.\n", res);
    //printf ("-------------------------------------\n\n");
    //free (res);

    //res = solution (-11965);
    //printf ("\nResult:%s.\n", res);
    //printf ("-------------------------------------\n\n");
    //free (res);

    res = solution (96521);
    printf ("\nResult:%s.\n", res);
    printf ("-------------------------------------\n\n");
    free (res);

    res = solution (0);
    printf ("\nResult:%s.\n", res);
    printf ("-------------------------------------\n\n");
    free (res);

    return 0;

}


char *solution(int number) {
    printf("number given: %d\n", number);
    int len = findlen (number);
    printf("Length: %d\n", len);
    ++len;
    char *numstr = malloc(len*sizeof(char));
    
    while (number != 0)
    {
        int n = number % 10;
        printf ("len - 2:%d\n", n);
        numstr[len - 2] = '0' + n;
        --len;
        number = number / 10;

    }

    //numstr[0] = '1';
    //numstr[1] = '2';
    //numstr[2] = '3';
    return numstr;
}

int findlen(int number)
{
    int count = 1;
    number = number / 10;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    return count;
}
