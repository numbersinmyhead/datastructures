#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void convertToURL(char *string, int len)
{
    int countSpace = 0;
    for(int i = 0; i < len - 1; i++)
    {
        if (string[i] == ' ')
        {
            ++countSpace;
        }
    }

    char urlStr[256];
    // whatever is the number of spaces we have, we will use those and
    // in addition to those we will also use two more characters for each
    // of those spaces because the url is replacing each space (i.e. each
    // character) by three other chracters, so we are trippling the amount
    // of space required.
    int index = len + (2 * countSpace);
    urlStr[index] = '\0';
    for (int i = len - 1 ; i >= 0 ; i--)
    {
        if (string[i] == ' ')
        {
            urlStr[index - 1] = '0';
            urlStr[index - 2] = '2';
            urlStr[index - 3] = '%';
            index = index - 3;
        }
        else
        {
            index--;
            urlStr[index] = string[i];
        }
    }
    printf("%s string all URLifyed %s\n", string, urlStr);
}

int main()
{

    char str[256];
    printf("Enter a string you wish to convert to URL:\n");
    scanf("%256[^\n]", str);
    printf("You entered:%s, len:%lu\n", str, strlen(str));

    convertToURL(str, strlen(str) + 1);
}


