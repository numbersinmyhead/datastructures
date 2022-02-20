#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

/*
 *Find missing element in a sorted array of consecutive numbers
 * Given an array arr[] of n distinct integers. Elements are placed 
 * sequentially in ascending order with one element missing. The task
 * is to find the missing element.
 */

extern int find( int *, int );
//extern int findAnotherAttempt( int *, int );

int main( int argc, char *argv[] ) {
    int o[4][5] = { { 4,6,7,8,9 },
        { 4,5,7,8,9 },
        { 4,5,6,8,9 },
        { 4,5,6,7,9 } };

    int e[5][6] = { { 4,6,7,8,9,10 },
        { 4,5,7,8,9,10 },
        { 4,5,6,8,9,10 },
        { 4,5,6,7,9,10 },
        { 4,5,6,7,8,10 } };
    int i;

    for( i=0; i < 4; i++ )
    {
        printf("o i:%i, ", i);
        assert( find( o[ i ], 5 ) == i + 5 ); // i is going to be 0 when 5 is returned from the find() function
        printf("Pass\n\n\n");
    }

    for( i=0; i < 5; i++ )
    {
        printf("e i:%i, ", i);
        assert( find( e[ i ], 6 ) == i + 5 ); // i is going to be 0 when 5 is returned from the find() function
        printf("Pass\n\n");
    }

    printf ("All passed successfully.\n");
    return 0;
}

int find(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = end / 2;
    printf("\n");

    if (arr[end] - arr[start] == n - 1)
    {
        printf("NO missing element");
        return 0;
    }
    //while (mid != 0)
    while (end - start > 2)
    {
        printf("start:%d, mid:%d, end:%d\n", start, mid, end);
            
        if (arr[end] - arr[mid] != end - mid)
        {
            start = mid;
        }
        else if (arr[mid] - arr[start] != mid - start)
        {
            end = mid;
        }
            mid = start + ((end - start) / 2);
    }
    int result = 0; 

    printf("Final start:%d, mid:%d, end:%d\n", start, mid, end);
    printf("arr[start]:%d, arr[mid]:%d, arr[end]:%d\n", arr[start],
                arr[mid], arr[end]);

    if (arr[mid] - 1  != arr[start])
    {
        printf("mid:%d\n", arr[mid]);
        result = --arr[mid];
    }
    else if (arr[end] - 1 != arr[mid])
    {
        printf("end:%d\n", arr[end]);
        result = --arr[end];
    }
    else
    {
        printf("start:%d\n", arr[start]);
        result = --arr[start];
    }
    
    return result;
}

