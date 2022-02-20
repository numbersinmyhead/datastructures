#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Program for empty c string and learning about various things.
// YOu can try guessing the output. It's going to be difficult though.

int main ()
{
    char reply[26] = {'\0'};
    //char reply[26] = {0};
    memset(reply, 0, sizeof(reply));

//#if 0
    printf("Did we crash?\n");

    char *replyStr = reply;
    printf("[%s]\n", replyStr);
    //while (*replyStr)
    //{
    //    printf("\n");
    //    replyStr++;
    //}

    int num = 0;
    scanf("%d", &num);
    if (num == 1)
    {
        reply[0] = 'c';
        reply[1] = 'k';
    }
//#endif

    printf("[%s]\n", replyStr);
    
    if (reply[0] == '\0')
    if (*reply)
        printf("Empty reply\n");

    return 0;
}
