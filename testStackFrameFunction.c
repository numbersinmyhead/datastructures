#include <stdlib.h>
#include <stdio.h>


int *add(int *a, int *b) {
	int c = *a + *b;
  return &c;
}

int main(int argc, char **argv) {
	int a= 2; int b = 3;
	int *c = add(&a, &b);

  printf("input:%d\n", *c);
  return 0;
}
