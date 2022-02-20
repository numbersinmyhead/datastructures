#include <cstdlib>
#include <ctime>
#include <sys/time.h>
#include <iostream>
#include <cstdio>
using namespace std;

/* What do this do? */
int a( unsigned int i ) {
    int c = 0;
    while( i ) {
        //printf("i:%d, c:%d\n", i, c);
        if( i & 1 ) { //this is the trickiest part. 1 is referring to 000001 and not 11111. &'ing anything with 1 would result in zeroing of that value except for the LSB.
            //printf("i:%d, c:%d\n", i, c);
            c++; 
            //printf("i:%d, i&1:%d, c:%d\n", i, i&1, c);
        }
        //printf("Before i>>=1:%i\n", i);
        i >>= 1;
        //printf("After i>>=1:%i\n", i);
    }
    //printf("\n\n");
    return c;
}

#if 0
i         = 5
c         = 0
i         = 0 1 0 1 0
&1          1 1 1 1 1
i         = 0 1 0 1 0
c         = 1
i>>=1     = 0 0 1 0 1
            0 0 0 1 0
            0 0 0 0 1
            0 0 0 0 0

i think c wil be 2 if i is 5
#endif

int main()
{
    printf ("a returned:%d when i was 5\n", a(5));
    
    printf ("a returned:%d when i was 10\n", a(10));
    printf ("a returned:%d when i was 15\n", a(15));
}
