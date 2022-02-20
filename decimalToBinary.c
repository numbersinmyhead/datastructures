// convert decimal to binary and to print the number of 1s in a binary number
//https://www.programiz.com/c-programming/examples/binary-decimal-convert



#include <stdio.h>
#include <math.h>

int convert(int);

int main() {
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %d in binary\n", n, bin);
  return 0;
}

int convert(int n) {
  int bin = 0;
  int rem, i = 1;

  int count1s = 0;

  while (n!=0) {
    rem = n % 2;
    if (rem == 1) {++count1s;}
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  printf("Total number of 1s:%d\n", count1s);
  return bin;
}
