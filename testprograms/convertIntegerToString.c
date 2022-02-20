#include <stdio.h>
#include <stdlib.h>

int len_num(int num);

char * solution(int X) {

    int v = X;
    int isNegative = 0;
    if (X < 0)
    {
        printf("Handle negative number:%d\n", X);
        isNegative = 1;
        X = X * (-1);
    }
    printf("x is %d\n", X);

    int len = len_num (X);
    if (isNegative == 1)
    len++;

    printf("Length is %d\n", len);
    
    char * str = (char*)malloc( (++len * sizeof(char)) );
    
    str[--len] = '\0';
    int i = len - 1 ;
    do
    {   
        int n = X%10;
        str[i] = '0' + n;
        printf("str[%i]:%c, n:%d.\n", i, str[i], n);
        X = X / 10;
        i--;
    }while (i >= 0);


    if (isNegative == 1)
    str[0] = '-';

    printf("\nstr:%s.\n", str);

    return str;
}

int len_num (int num){
  int l=!num;
  while(num)
  {
    l++;
    num /=10;

  }
  return l;
}

int main()
{
//int x = 100;
//int x = -100;

char *res = solution (965);
printf ("\nResult:%s.\n", res);
printf ("-------------------------------------\n\n");
free (res);

res = solution (-965);
printf ("\nResult:%s.\n", res);
printf ("-------------------------------------\n\n");
free (res);

res = solution (-11965);
printf ("\nResult:%s.\n", res);
printf ("-------------------------------------\n\n");
free (res);

res = solution (96521);
printf ("\nResult:%s.\n", res);
printf ("-------------------------------------\n\n");
free (res);

res = solution (0);
printf ("\nResult:%s.\n", res);
printf ("-------------------------------------\n\n");
free (res);

}
