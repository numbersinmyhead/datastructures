#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    //int i = 10;

    //printf("i++:%d, i++:%d, i++=%d\n", i++, i++, i++);


    char str[] = "them strings";
    char *strptr = "them strings";

    printf ("str:%s, strptr:%s\n", str, strptr);

    strptr++;

    printf ("str:%s, strptr:%s\n", str, strptr);
    return 0;
}
