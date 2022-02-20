#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int x = 1;
  char *y = (char*)&x;
  int result = (int) *y + 48;
  printf("Endianness: %s\n", result == 1 ? "Little" : "Big");

  return 0;
}
