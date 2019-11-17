#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    
    char *str1 = "hello";
    printf ("str1:%s.\n", str1);
    printf ("str1[0]:%c.\n", str1[0]);
    printf ("str1[5]:%c.\n", str1[5]);
    printf ("strlen(str1):%zu\n", strlen(str1));
    printf ("sizeof(str1):%zu\n", sizeof(char *));

    printf ("\n\n");

    char *str2;
    str2 = str1;
    printf ("str2:%s.\n", str2);
    printf ("str2[0]:%c.\n", str2[0]);
    printf ("str2[5]:%c.\n", str2[5]);

    //const char *str3 = 
}



