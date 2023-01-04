#include <stdio.h>

// int function(char *);

int main(){

//   function("Hello world..!\r\n");

   int i=0;

   for(i=0; i<20; i++)
    {
#ifdef USE_SYSCALL
       printf("Round %d: this is AAAAA roosbeh Github application..!\r\n", i);
#else
       printf("Round %d: this is BBBBB roosbeh Github application..!\r\n", i);
#endif
    }

    return 0;
}
