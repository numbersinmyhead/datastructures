#include <stdlib.h>
#include <stdio.h>

struct item {
  int element;
};


void modify_item(struct item **s){
   struct item *retVal = malloc(sizeof(struct item));
   retVal->element = 5;
   *s = retVal;
}

int main(int argc, char **argv) {
   struct item *stuff = NULL;
   modify_item(&stuff); //After this call, stuff == NULL, why?

   if (stuff == NULL) {
     printf("Struct is null\n");
   }
   else
   {
     printf("struct is not null\n");
   }
}
