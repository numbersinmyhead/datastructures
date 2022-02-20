#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



bool checkpali(char *str1, char *str2) {

  int len1 = strlen(str1) - 1;
  int len2 = strlen(str2) - 1;

  if (len1 != len2) { return false; }

  for(int i = 0; i < len1/2; i++) {
    if (str1[i] != str2[(len1 - 1) - i])
    {
      return false;
    }
  }

  return true;
}

int main(int argc, char ** argv) {

  char str1[256];
  printf("Enter str1: \n");
  //scanf("%256[^\n]", str1);
  fgets(str1, 256, stdin);

  char str2[256];
  printf("Enter str2: \n");
  fgets(str2, 256, stdin);

  bool result = checkpali(str1, str2);

  printf("Palindrome? %s", result ? "Yes" : "No");
  printf("\n");

  return 0;
}
