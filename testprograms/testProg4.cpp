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
        if( i & 1 ) { //this is the trickiest part. 1 is referring to 000001 and not 11111. &'ing anything with 1 would result in zeroing of that value except for the LSB.
            c++; 
        }
        i >>= 1;
    }
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
