#include <stdio.h>
#include <stdlib.h>

int power(int base,int pow)
{
   int i;
   int result=1;
   for(i=1;i<=pow;i++)
   {
       result*=base;
   }
   return result;
}

int main()
{
    printf("Result : %d",power(2,4));
    return 0;
}
