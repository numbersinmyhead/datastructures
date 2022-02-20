#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool string_pali(const char *str);


int main(int argc, char **argv)
{
  char str[256];
  printf("Enter a string:\n");
  scanf("%256[^\n]", str);

  printf("You entered:(%s)\n", str);

  bool result = string_pali(str);


  printf(" Result: (%s)\n", result == 1 ? "Palindrome" : "Not a palindrome");

  return 0;
}


bool string_pali(const char *str)
{
  int len = strlen(str);
  //char *reversed_str = malloc(strlen(str) * sizeof(char));

  for(int i = 0; i < len/2; i++)
  {
    if (str[i] != str[(len - 1) - i])
    {
      printf("Mismatch. str[%i]:%c doesn't match str[%i]:%c\n", i, str[i],
                          (len-1) - i, str[(len-1) - i]);
      return false;
    }
  }

  return true;
}
