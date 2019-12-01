#include <stdio.h>
#include <stdlib.h>

struct s {
    double f;
    int i;
    char c[3];
    void *p;
    int x[0];
};

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
    return 0;
}
