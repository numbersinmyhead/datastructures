#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 256
#define MAXSIZESTR "256"
//Implement a string to check if it has all unique characters.
int main()
{
  //Assuming the string is ASCII and has all unique characters.
  char testString[MAXSIZE] = {};
  bool arrayStrIndex[MAXSIZE] = {false}; 
  printf("Enter a string: ");
  scanf("%" MAXSIZESTR "[^\n]", testString);
  // gets(testString); //works fine, but then risk of buffer overflow.
  //fgets(testString, MAXSIZE, stdin); // also detects \n and includes that in the string. You can igore the newline character by replacing the last characters with a null character.
  
  //printf("You entered: %s, and its length is %lu characters.\n", testString, strlen(testString));

  for (size_t i = 0; i < strlen(testString); i++)
  {
      if (arrayStrIndex[testString[i]])
      {
          printf("%c has occured more than once at index %lu.\n", testString[i], i);
      }
      arrayStrIndex[testString[i]] = true; 
  }

  printf("\n");
}

// another approach is to just go through every single character and check if it occurs more than once. Time complexity would be O(N*N) though because going through the loop twice.



