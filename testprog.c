
// If you have a number n, and you multiply it by 2
// if N is even, divide by 2.
//if N is odd, (3*N)+1
// Eventually you will reach 1.

#include<stdlib.h>
#include<stdio.h>

unsigned int func(unsigned N);

int main(int argc, char *argv[])
{

  unsigned int N = 6;
  unsigned int max_counter = 0;
  for (int i =0; i < 1000000; i++)
  {
    unsigned int result = func(i);
    max_counter = (result > max_counter ? result : max_counter);
  }

  printf("max_counter:%d\n", max_counter);
  return 0;


}


unsigned int func(unsigned int N)
{
  long long counter = 0;
  while (N != 1)
  {
    ++counter;
    //printf("Current N:%i\n", N);
    if (N % 2 == 0)
    {
      N=N/2;
    }
    else if (N%2 != 0)
    {
      N = (3*N) + 1;
    }
  }
  ++counter; //For the last value (i.e. Number 1)
  //printf("N:%i\n", N);
  //printf("Conjecture is true. Counter:%d\n", counter);
  return counter;

}
