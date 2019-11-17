
#include <stdio.h>

/* What's wrong with this program? */
#if 0
int main (int argc, char const * argv ) {
    for( int i = 0; i < argc; ++i ) {
        printf("%sn", argv[i] );
    }
}
#endif
//the program above doesn't compile.
//the signature is wrong for the code above.
//it should be **argv
//

/* program will do when I run it like this:
 * * <prog> 1 2 3 4
 * */


int main (int argc, char **argv ) {
    for( int i = 0; i < argc; ++i ) {
        printf("%s\n", argv[i] );
    }
}
