#include <unistd.h>
#include <stdio.h>

int main()
{

    char *c = "k";
    write (1, c, 1);
    printf("\n");
    printf( "%s", c );
    printf("\n");
    printf( "%c", *c );
    printf("\n");

    if(fork())
        printf("MAGIC\n");

}
