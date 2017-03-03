#include <stdio.h>
#include <stdlib.h>

int powerOb(int base,int pow)
{
   int i;
   int result=1;
   for(i=1;i<=pow;i++)
   {
       result*=base;
   }
   return result;
}

long powerLogb(int x,int n)
{
     if(n==0)
        return 1;
     if(n==1)
        return x;
     if(n%2==0)
        return powerLogb(x*x,n/2);
     else
        return powerLogb(x*x,n/2)*x;
}

int main(int argc, char *argv[])
{
  printf("Result : %d\n",powerOb(2,4));
  printf("Result : %d",powerLogb(2,4));
  system("PAUSE");	
  return 0;
}
