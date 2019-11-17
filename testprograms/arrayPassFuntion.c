#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrayTest (int a[])
{

    a[0] = a[0] + a[1];
    a[1] = a[0] - a[1];
    a[0] = a[0] - a[1];
}

int fn(int v)
{
    if ( v <= 1 )
        return 1;
    else
        return v * fn(v - 1);
}


int main ()
{

    int arr[2] = {1,2};
    printf ("Before arr[0]:%d, arr[1]:%d.\n", arr[0], arr[1]);
    arrayTest(arr);
    printf ("After arr[0]:%d, arr[1]:%d.\n", arr[0], arr[1]);
   
    printf("%d", fn(4));
}

    

