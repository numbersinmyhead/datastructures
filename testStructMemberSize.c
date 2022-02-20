#include <stdlib.h>
#include <stdio.h>

struct s {
    double f;
    int i;
    char c[3];
    void *p;
    int x[1];
};
int main( int argc, char ** argv ) {
    struct s new_s;
    size_t size = sizeof(new_s.f);
    size_t size_i = sizeof(new_s.i);
    size_t size_c = sizeof(new_s.c);
    size_t size_p = sizeof(new_s.p);
    size_t size_x = sizeof(new_s.x);

    int size_s = (int) sizeof(new_s);

    int total = (int) size + size_i + size_c + size_p + size_x;
    printf (" size:%zu, size_i:%zu, size_c:%zu, size_p:%zu, size_x:%zu\n",
    size, size_i, size_c, size_p, size_x);
    printf ("void pointer size: %d\n", (int) size_p);
    printf ("Total: %d\n", total);
    printf ("Struct size: %d\n", size_s);

    return 0;
}
