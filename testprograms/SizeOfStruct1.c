#include <stdio.h>

/* Describe the code below */

struct s {
    double f;
    int i;
    char c[3]; //padding of C is weird in C. It doesn't seem to be affecting sizeof(struct) here
    void *p;
    int x[0];
};

int main( int argc, char ** argv ) {

    struct s temp;

    printf("The size of the struct is %d \n", (int) sizeof(temp));
    printf("The size of the double is %d \n", (int)sizeof(temp.f));
    printf("The size of a integer is %d \n", (int)sizeof(temp.i));
    printf("The size of a character array is %d \n", (int)sizeof(temp.c));
    printf("The size of a void pointer is %d \n", (int)sizeof(temp.p));
    printf("The size of a integer array is %d \n", (int)sizeof(temp.x));

    return 0;

}

#if 0
output
The size of the struct is 24
The size of the double is 8
The size of a integer is 4
The size of a character array is 3
The size of a void pointer is 8
The size of a integer array is 0
#endif
