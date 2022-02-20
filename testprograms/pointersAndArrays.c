#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Program to demonstrate how arrays and points work
// how you can derefernce and assign them.
// try guessing the output to test knowledge


int main() {
    int a[5] = {31, 10, 23, 21, 30};
    int *p;
    printf("a[0]:%d\n", a[0]);
    p = &a[0];
    printf("p:%p\n", p);
    printf("*p:%i\n", *p);
    p = p + 2;
    printf("p = p+2:%p\n", p);
    printf("*p:%i\n", *p);

    //resetting the value of p
    p = &a[0];
    printf("\n\np:%p\n", p);
    printf("*p:%i\n", *p);
    printf("p[2]:%d\n", p[2]);

    printf("\n\n*a:%i\n", *a);
    printf("a[2]:%i\n", a[2]);
    printf("a     :%p\n", a);
    printf("a+1   :%p\n", a+1);
    printf("&a[1] :%p\n", &a[1]);

}


