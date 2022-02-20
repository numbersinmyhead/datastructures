#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverse_string(const char *str);


int main(int argc, char **argv)
{
  char str[256];
  printf("Enter a string to reverse:\n");
  scanf("%256[^\n]", str);

  printf("You entered:(%s)\n", str);

  char *result = reverse_string(str);

  printf("Reversed String: (%s)\n", result);

  free(result);
  return 0;
}


char* reverse_string(const char *str)
{

  int len = strlen(str);
  char *reversed_str = malloc(strlen(str) * sizeof(char));

  for(int i = 0; i < len; i++)
  {
    reversed_str[i] = str[(len - 1) - i];
  }

  return reversed_str;
}
