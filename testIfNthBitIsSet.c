#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char **argv) {

  int n = 4;

  //Convert a decimal number to binary.
  // array to store binary number
  int binaryNum[32];
  // counter for binary array
  int i = 0;
  while (n > 0) {
      // storing remainder in binary array
      binaryNum[i] = n % 2;
      n = n / 2;
      i++;
  }
  // printing binary array in reverse order
  for (int j = i - 1; j >= 0; j--) {
      printf("%d", binaryNum[j]);
  }
  printf("\n\n");

  int num = 4;
  temp =


  return 0;
}
