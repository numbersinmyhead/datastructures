#include <stdio.h>
// what do you think is wrong with the program below?

/*
int main( int argc, char const * argv ) { // the datatype is incorrect. It should be char ** or char *argv[]
    for( int i = 0; i < argc; ++i ) {
        printf("%s \n", argv[i] ); // this line would give an error i think
    }
}
*/

int main (int argc, char *argv[])
{
    for (int i = 0; i < argc; ++i)
    {
        printf("%s \n", argv[i]);
    }
}

/* what the program doed when we run it like this:
 * * <prog> 1 2 3 4
 * */

/* if you run the program like it says above you will get 
 * Macbook-Air:testprograms haiku$ ./a.out 1 2 3 4
 * ./a.out 
 * 1 
 * 2 
 * 3 
 * 4 
 */

