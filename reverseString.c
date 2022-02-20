#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* reverse_string (char *str) {
  int len = strlen(str);
  char *tempString = malloc(sizeof(char) * len);

  int i = 0;
  for(i = 0; i < len; i++) {
    printf("%c, ", str[(len - 1) - i]);
    tempString[i] = str[(len - 1) - i];
  }
  //tempString[i] = '\0';

  printf("\nReversed String:(%s)\n", tempString);
  return tempString;

}


int main (int argc, char **argv) {

  char *str1 = "hello this is me";
  char *str2 = "loopool";
  char str[256];
  printf("Enter a string to reverse\n");
  //fgets(str, 256, stdin); //works fine.
  scanf("%256[^\n]", str);

  printf("You entered (%s) with length %zu\n", str, strlen(str));

  //int i = strlen(str) - 1;
  //while (i >= 0) {
  ////for (int i = strlen(str) - 1; i >=0; --i) {
  //    printf("i:%i\n", i);
  //    printf("%c\n", str[i]);
  //    i--;
  //}

  /*
  char *tempString;
  tempString = (char *)malloc(sizeof(char) * (strlen(str) + 1));
  int len = strlen(str) - 1;
  int i = 0;
  while (len >= 0) {
    tempString[i] = str[len];
    len--;
    printf("%c", tempString[i]);
    i++;
  }
  tempString[i] = '\0';
  printf("\nReversed String:(%s)\n", tempString);
  printf("\n");
  free(tempString);*/


  char *result = reverse_string(str);
  printf("\nSecond Attempt. Reversed String:(%s)\n", result);
  printf("\n");
  if (result != NULL) {
    free(result);
  }


  return 0;
}
