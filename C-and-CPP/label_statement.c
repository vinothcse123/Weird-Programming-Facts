#include <stdio.h>

int main()
{
   goto Success;
   if(true) Success : puts("Success :)");
   else Fail : puts("Fail :(");
   return 0;
}

