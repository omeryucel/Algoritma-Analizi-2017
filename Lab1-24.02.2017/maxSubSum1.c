#include <stdio.h>
#include <stdlib.h>

int maxSubSum1(int *array,int length)
{
    int i,j,k;
    int thisSum=0,maxSum=0;

    for(i=0;i<length;i++)
    {
        for(j=i;j<length;j++)
        {
            thisSum=0;
            for(k=i;k<=j;k++)
            {
                thisSum+=array[k];
            }
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

    printf("Max Sub Sum1 : %d",maxSubSum1(array,length));
    return 0;
}
