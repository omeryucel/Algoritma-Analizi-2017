#include <stdio.h>
#include <stdlib.h>

int maxSubSum2(int *array,int length)
{
    int i,j;
    int thisSum=0,maxSum=0;
    for(i=0;i<length;i++)
    {
        thisSum=0;
        for(j=i;j<length;j++)
        {
            thisSum+=array[j];
            if(thisSum>maxSum)
            {
                maxSum=thisSum;
            }
        }
    }
    return maxSum;
}

int main()
{
    int array[]={4, -3, 5, -2, -1, 2, 6, -2};
    int length=sizeof(array)/sizeof(array[0]);

    printf("Max Sub Sum2 : %d",maxSubSum2(array,length));
    return 0;
}
