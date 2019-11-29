#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

//the code for this program should be tried by oneself first.
//tehre are little complications.

/*
 *Find missing element in a sorted array of consecutive numbers
 * Given an array arr[] of n distinct integers. Elements are placed 
 * sequentially in ascending order with one element missing. The task
 * is to find the missing element.
 */

extern int find( int *, int );
extern int findAnotherAttempt( int *, int );

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
        assert( findAnotherAttempt( o[ i ], 5 ) == i + 5 ); // i is going to be 0 when 5 is returned from the find() function
        printf("Pass\n");
    }
    for( i=0; i < 5; i++ )
    {
        printf("e i:%i, ", i);
        assert( findAnotherAttempt( e[ i ], 6 ) == i + 5 ); // i is going to be 0 when 5 is returned from the find() function
        printf("Pass\n");
    }

    printf ("All passed successfully.\n");
    return 0;
}


int findAnotherAttempt(int *a, int col)
{

    int low = 0;
    int high = col -1; //since index starts from 0;
    while (low < high)
    {
        int middle = low + (high-low)/2;
        
        // since the array is consecutive, we can the find the nth element by simple arithmetic operation.
        // nth index will always be equal to the difference of the element at the nth index and the first
        // element.
        if (a[middle] - a[0] == middle)
        {
            //since the left half is sorted and isn't missing anything, we now check the right half.
            if (a[middle + 1] - a[middle] > 1 )
                return a[middle] + 1; //+1 because it is guaranteed to be the next element. Left half is sorted already
            //and isnt missing anything. It had to be the right half which is missing element IF the differece
            //between consecutive element is greator than 1.
            else
            {
                low = middle + 1; //the middle elements and its next one were already sorted, so we just move
                //forward to the right by one element by adjusting the lower index.
            }
        }
        else
        {
            if (a[middle] - a[middle - 1] > 1)
                return a[middle] - 1; //we are sending the element which we think is the odd one out.
            //the element before a[middle] i.e. a[middle-1] is already part of the sorted array and isnt missing anythig
            else
            {
                high = middle - 1; //move the array element to the left by one
                //i give up man
            }
        }
    }
    return 0;

}






























#if 0

// The code/logic for the function below was taken from 
// https://www.geeksforgeeks.org/find-missing-element-in-a-sorted-array-of-consecutive-numbers/
// I also used some of my own code below, but I am going to make another attempt to run it. 


//4,5,6,7,8,9,10
//6,7,8,9,10,12
//4,5,7,8,9,10
//4,5,6,7,8,10
int find(int *a, int col)
{
    //Find the middle element and then do like a binary search
    int low = 0;
    int high = col - 1;
    while(low < high)
    {
        int middle = low + (high-low)/2;
        // we need to check if the middle element is consistent, so we always use the index of the very
        // first element. The difference would be the same as the index of the middle element.
        if ((a[middle] - a[0]) == middle)
        {
            if (a[middle + 1] - a[middle] > 1)
                return a[middle] + 1; // returning hte next element because we already know that the a[middle] is consistent
            //so there is no need to reutrn a[middle]. It can only be the next element.
            else
            {
                low = middle + 1; // we need to move forward the index since we didnt find anything. Low will change.
               // middle = low + (high - low)/2;
            }
        }
        else
        {
            if (a[middle]  - a[middle - 1] > 1)
                return a[middle] - 1;
            else
            {
                high = middle - 1;
                //middle = low + (high - low)/2;
            }
        }
    }
    return 0; //Failed to find missing element
}

#endif
