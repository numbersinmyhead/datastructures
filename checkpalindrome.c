#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// check if a given string is palindrome or not.

bool isPalindrome( const char * );

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
    if (str == NULL)
    return false;

    if (!strcmp(str, ""))
    return false;

    int len = strlen(str);
    printf("Length of the string (%s) is:%d\n", str, len);

    int midpoint = len / 2;
    int startpoint = 0;
    int endpoint = len - 1;

    while (startpoint < endpoint)
    {
       if (tolower(str[startpoint]) != tolower(str[endpoint]))
       {
            return false;
       }
       startpoint++;
       endpoint--;
    }

    return true;
}


