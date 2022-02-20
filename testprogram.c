#include <stdlib.h>
#include <stdio.h>
#include <semaphore.h>
#include <string.h>

#define BUF_SIZE 1024
#define N_MAX 2


struct item {
  int count;
  int complete;
  //char (*buffer)[BUF_SIZE];
  char buffer[N_MAX][BUF_SIZE];
  //sem_t semEmpty;
  //sem_t semFull;
  //pthread_mutex_t mutexBuffer;
};

int main(int argc, char **argv) {

   if (argc < 2) {
     printf ("Error num of arguments\n");
     return 1;
   }
   int countArgs = atoi(argv[1]);
   //struct item *stuff = malloc(sizeof(struct item));
   struct item *stuff;


   printf("Sizeof struct item: %zu\n", sizeof(struct item));
   printf("Sizeof char*: %zu\n", sizeof(char *));
   printf("Sizeof stuff->buffer: %zu\n", sizeof(stuff->buffer));
   printf("Sizeof stuff->buffer[BUF_SIZE]: %zu\n", sizeof(stuff->buffer[BUF_SIZE]));

   // *stuff->buffer = "hello";

   //stuff->buffer = malloc( countArgs * 1024);

   printf("A\n");

   for (int i = 0; i < N_MAX; i++)
   {
     snprintf(stuff->buffer[i], BUF_SIZE, "hello %d", i);
   }
   printf("B\n");

   // *stuff->buffer[0] = "hi";
   // *stuff->buffer[1] = "this";

   //for (int i = 0; i < N_MAX; i++ )
   //{
  //   printf("%s \n", stuff->buffer[i]);
   //}
   printf("C\n");

   //free(stuff->buffer);
   //free(stuff);
   printf("D\n");
   return 0;
}


/*

int main(int argc, char **argv) {

  if (argc < 2) {
    printf ("Error num of arguments\n");
    return 1;
  }

  char (*str)[BUF_SIZE];
  //char (*str)[BUF_SIZE] = malloc(2 * 1024);
  printf ("sizeof str: %zu\n", sizeof(str));
  printf ("sizeof str[0]: %zu\n", sizeof(str[0]));
  printf ("sizeof *str[0]: %zu\n", sizeof(*str[0]));
  printf ("sizeof str[BUF_SIZE]: %zu\n", sizeof(str[BUF_SIZE]));
  printf ("sizeof char *: %zu\n", sizeof(char *));

  str = malloc(2 * 1024);

  printf("1: %p, \n", str[0]);
  printf("2: %p, \n", str[1]);

  //snprintf(str[0], BUF_SIZE, "hello");
  //snprintf(str, BUF_SIZE, "hello");

  //char (*string1)[BUF_SIZE] = malloc(atoi(argv[1]) * 1024);

//  for (int i = 0; i < atoi(argv[1]); i++ )
  //{
    //snprintf(str[i], BUF_SIZE, "hello");
  //}


  for (int i = 0; i < 2; i++ )
  {
    printf("%s \n", str[i]);
  }

  //printf("\n\nAFTER malloc new sizes are:\n");

  //printf ("sizeof string1: %zu\n", sizeof(string1));
  //printf ("sizeof string1[0]: %zu\n", sizeof(string1[0]));
  //printf ("sizeof *string1[0]: %zu\n", sizeof(*string1[0]));
  //printf ("sizeof string1[BUF_SIZE]: %zu\n", sizeof(string1[BUF_SIZE]));
  //printf ("sizeof char*: %zu\n", sizeof(char *));

//output below:
//c_programming_practice $% gcc testprogram.c && ./a.out  2
//sizeof str: 8192
//sizeof str[0]: 8
//sizeof *str[0]: 1
//sizeof str[BUF_SIZE]: 8
//sizeof char *: 8


//AFTER malloc new sizes are:
//sizeof string1: 8
//sizeof string1[0]: 1024
//sizeof *string1[0]: 1
//sizeof string1[BUF_SIZE]: 1024
//sizeof char*: 8


}*/
