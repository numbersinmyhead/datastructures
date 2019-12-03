#include <stdio.h>
#include <stdlib.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
      (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

struct s {
    double f;
    int i;
    char c[3];
    void *p;
    int x[0];
};
int afunc(unsigned int i);
int bfunc(unsigned int i);
int main( int argc, char ** argv ) {

    struct s temp;
    printf ("sizeof struct s temp is:%lu.\n", sizeof(temp));

    temp.f = 23.21;
    printf ("size of double f is:%lu\n", sizeof(temp.f));
    printf ("value of f is:%f\n.", temp.f);

    float var = 2.13;
    printf ("Size Float:%lu, Value:%f\n", sizeof(var), var);

    int *a = (int *) malloc(5 * sizeof(int));

    
    printf("Enter some numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
 //disabled the code above so i can test some other function 

    for (int i = 0; i < 50; i++)
    {
        printf("%d returns %d.\n", i, afunc(i));
    }
    
    for (int i = 0; i < 50; i++)
    {
        printf("%d returns %d.\n", i, bfunc(i));
    }
    return 0;
}



int afunc( unsigned int i ) {
    int c = 0;
    while( i ) {
        if( i & 1 ) { c++; }
        i >>= 1;
    }
    return c;
}


int bfunc( unsigned int i ) {
    static unsigned char n[] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
    int c = 0;
    while( i ) {
        c+=n[i&15];
        i >>= 4;
    }
    return c;
}

