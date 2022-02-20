#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

extern bool isPalindrome( const char * );

int main() {
    assert( isPalindrome( "civic" ) == true );
    assert( isPalindrome( "evitative" ) == true );
    assert( isPalindrome( "radar" ) == true );
    assert( isPalindrome( "stats" ) == true );
    assert( isPalindrome( "abba" ) == true );
    assert( isPalindrome( "aba" ) == true );
    assert( isPalindrome( "aBa" ) == true );
    assert( isPalindrome( "statss" ) == false );
    assert( isPalindrome( "abracadabra" ) == false );
    printf( "Lower case palindromes passed!\n" );

    assert( isPalindrome( "ABa" ) == true );
    assert( isPalindrome( "cIviC" ) == true );
    printf( "Upper/lower cases examples passed!\n" );

    assert( isPalindrome( "" ) == false );
    assert( isPalindrome( NULL ) == false );
    printf( "No string/empty string corner cases passed!\n" );

    printf( "Nailed it!! Congratulations!n" );

    return ( 0 );
}


bool isPalindrome(const char *str)
{
    if (!str)
    {
        printf("NULL pointer");
        return false;
    }

    int len = strlen (str);
    if (len == 0)
    {
        printf ("Empty string is a palindrome\n");
        return false;
    }


    int j = len -1;
    for (int i = 0; i < len/2; i++)
    {
        if (tolower(str[i]) != tolower(str[j--]))
        {
            printf ("str:%s char mismatch. str[%i]:%c != str[%i]:%c, RESULT:%i\n",
                    str, i, str[i], j, str[j], strcmp(&str[i], &str[j]));
            return false;
        }
    }
    return true;
}
