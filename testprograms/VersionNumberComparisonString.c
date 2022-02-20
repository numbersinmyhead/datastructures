#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
/*
 * vercmp compares two software version strings and returns the following:
 * if v1 > v2 : return 1
 * if v1 == v2 : return 0
 * if v1 < v2 : return -1
 * input strings are in the form "1.0.3", "2.10", "6.0.0.3", etc...
 * "1.0" is considered bigger than "1" and "1.10" is greater than "1.2"
 * */
int vercmp(char *v1, char *v2)
{
    char temp_str1;
    char temp_str2;

    //Compare length
    if (strlen(v1) > strlen(v2))
    {
        return 1;
    }
    else if (strlen(v1) < strlen(v2))
    {
        return -1;
    }
    else
    {
        int length = strlen(v1);
        for(int i = 0; i < length; i++)
        {
           //printf ("length:%i, i:%i, v1:%s, strlen(v1):%lu ", length, i, v1, strlen(v1));
           //printf ("v2:%s, strlen(v2):%lu\n", v2, strlen(v2));
           if (v1[0] > v2[0]) //this line is VERY VERY important. I was confused here.
           {
               return 1;
           }
           else if (v1[0] < v2[0]) // you wanna dereference the values!
           {
               return -1;
           }
           else
           {
               v1++;
               v2++;
           }
        }
        return 0;
    }
}

int main()
{
    printf ("1.1 > 1.0 \n");
    assert( vercmp( "1.1", "1.0" ) == 1 );
    printf ("1.0 < 1.1 \n");
    assert( vercmp( "1.0", "1.1" ) == -1 );
    printf ("1.0 = 1.0 \n");
    assert( vercmp( "1.0", "1.0" ) == 0 );
    printf ("1 < 1.0 \n");
    assert( vercmp( "1", "1.0" ) == -1 );
    printf ("1.0 > 1 \n");
    assert( vercmp( "1.0", "1" ) == 1 );
    printf ("1.0000 < 1.0001 \n");
    assert( vercmp( "1.0000", "1.0001" ) == -1 );
    printf ("1 < 1.0.1.1 \n");
    assert( vercmp( "1", "1.0.1.1" ) == -1 );
    printf ("123.1.0 > 112.1 \n");
    assert( vercmp( "123.1.0", "112.1" ) == 1 );

    return 0;
}
