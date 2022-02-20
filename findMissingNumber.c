#include <stdio.h>
 //https://www.geeksforgeeks.org/find-the-missing-number/


/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[], int n)
{
    int i, total;
    total = (n) * (n + 1) / 2;
    printf("Total:%d\n", total);
    for (i = 0; i < n; i++)
        total -= a[i];
    return total;
}

/*program to test above function */
int main()
{
    int a[] = { 1, 2, 4, 5, 6 };
    int miss = getMissingNo(a, 5);
    printf("%d\n", miss);
}
