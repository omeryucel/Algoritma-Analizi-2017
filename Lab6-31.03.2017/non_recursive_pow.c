#include <stdio.h>
#include <stdlib.h>

/*
X^62 = X^20 * X^42
X^42 = X^20 * X^20 * X^2
X=20 = X^10 * X^10
X^10 = X^5 * X^5
X^5 = X^2 * X^2 * X
X^2 = X * X
*/

static int step=0;

long power(int base, int exponent)
{
    int multi,e,b;
    multi=1;
    e=exponent;
    b=base;

    if(exponent==0)
        return 1;

    while(e!=1)
    {
        if(e%2==1)
            multi*=b;
        b*=b;
        e/=2;
        step++;
    }

    return multi*b;
}

int main()
{
    long result;
    result=power(3,62);
    printf("Result: %ld\n",result);
    printf("Step: %d",step);

    return 0;
}
