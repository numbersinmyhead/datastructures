#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void anagram(const char *str1, const char *ste2);

// determine if two strings are anagrams

int main(int argc, char **argv)
{
    
    anagram("abdef", "feabd");
    anagram("bdef", "eabd");
    anagram("abdf", "eabd");
    anagram("abdf", "fabd");
    anagram("bd", "bd");
    return 0;
}

void anagram(const char *str1, const char *str2)
{
    printf("strlen(str1):%lu, strlen(str2):%lu\n", strlen(str1), strlen(str2));
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Different lengths, cannot be anagrams\n");
        return;
    }

    printf("str1:%s, str2:%s.\n", str1, str2);

    int table[128] = {0};
    for (int i = 0; i < len1; i++)
    {
        printf("(%c)\n", str1[i]);
        table[str1[i]]++;
    }


    for (int i = 0; i < len1; i++)
    {
        table[str2[i]]--;
        if (table[str2[i]]< 0)
        {
            printf("not anagram");
        }
    }
    printf("anagram\n");
}
