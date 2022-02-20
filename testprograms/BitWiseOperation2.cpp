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

/* What does this one do? */
int b( unsigned int i ) {
    static unsigned char n[] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
    int c = 0;
    while( i ) {
        c+=n[i&15];
        i >>= 4;
    }
    return c;
}

int main()
{
    printf ("b returned:%d when i was 5\n", b(5));
    printf ("b returned:%d when i was 10\n", b(10));
    printf ("b returned:%d when i was 15\n", b(15));
}
