#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NAME_MAX 256
#define NAME_MAX_S "256"


// There are couple of ways to do this: 
// a) sorting the strings and then comparing them
// b) creating an array as long as the numbe of unique characters in ASCII (7-bit and 8-bit)
// I am gonna solve it using arrays because i can't recall how to sort string

/*int anagram ( const string s1, const string s2) {
    for( int i = 0; i < s1.size(); i++) {
        int x = s2.find(s1[i]);
        if (x != string::npos)
            s2.erase(x);
        else
            return false;
    }
    return s2.size()==0;
}*/


bool isAnagramUsingArrays (const char *s1, const char *s2){

   if (strlen(s1) != strlen(s2))
   {
       printf ("Not anagrams. Different lengths.\n");
       return false;
   }

   int arrayStr1[NAME_MAX] = {0};
   int arrayStr2[NAME_MAX] = {0};

   for (int i = 0; i < strlen(s1); i++)
   {
       arrayStr1[s1[i]]++;
       arrayStr2[s2[i]]++;
   }

   for (int i = 0; i < strlen(s1); i++)
   {
      if (arrayStr1[i] != arrayStr2[i])
      {
          printf ("Character mismatched. arrayStr1[%i]:%c vs arrayStr2[%i]:%c\n",
                  i, (char) arrayStr1[i], i, (char) arrayStr2[i]);
          printf ("Not an anagram.\n");
          return false;
      }
   }
   return true;
}

int main (int argc, char *argv[] ) {
    char str1[NAME_MAX];
    printf("Please enter a string: ");
    scanf("%256[^\n]", str1);
    printf("Please enter the anagram of previous input: ");
    char str2[NAME_MAX];
    scanf(" %256[^\n]", str2);
    //printf("isAnagram: %d", isAnagram(str1, str2));
    printf("isAnagram: %s\n", isAnagramUsingArrays(str1, str2) ? "Yes": "Nien");
}


