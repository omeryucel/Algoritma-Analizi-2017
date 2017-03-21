#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void bubbleSort(int array[SIZE])
{
    int i,j,temp;
    for(i=0;i<(SIZE-1);i++)
    {
        for(j=0;j<(SIZE-i-1);j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void insertionSort(int array[SIZE])
{
    int i,j,temp;

    for(i=1;i<SIZE;i++)
    {
        j=i;
        while( j>0 && array[j]<array[j-1] )
        {
            temp=array[j];
            array[j]=array[j-1];
            array[j-1]=temp;
            j--;
        }
    }
}

void selectionSort(int array[SIZE])
{
    int i,j,minIndex,temp;

    for(i=0;i<(SIZE-1);i++)
    {
        minIndex=i;
        for(j=i+1;j<SIZE;j++)
        {
            if(array[minIndex]>array[j])
                minIndex=j;
        }
        if(minIndex!=i)
        {
            temp=array[i];
            array[i]=array[minIndex];
            array[minIndex]=temp;
        }
   }
}

void quickSort(int array[SIZE], int first, int last)
{
    int i,j,pivot,temp;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while( array[i]<=array[pivot] && i<last )
                i++;
            while( array[j]>array[pivot] )
                j--;
            if(i<j)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;
        quickSort(array,first,j-1);
        quickSort(array,j+1,last);
    }
}

void addElement(int array[SIZE])
{
    int i;
    for(i=0;i<SIZE;i++)
        array[i]=rand()%1001;
}

void printArray(int array[SIZE])
{
    int i;
    for(i=0;i<SIZE;i++)
        printf(" %d ",array[i]);
    printf("\n");
}

int main()
{
    int array[SIZE];
    clock_t begin,end;
    double time;

    //Bubble Sort
    addElement(array);
    //printArray(array);
    begin=clock();
    bubbleSort(array);
    end=clock();
    printf("---Bubble Sort---");
    //printArray(array);
    time=(double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nArray Size (N): %d",SIZE);
    printf("\nTime: %.4f Seconds\n\n",time);

    //Insertion Sort
    addElement(array);
    //printArray(array);
    begin=clock();
    insertionSort(array);
    end=clock();
    printf("---Insertion Sort---");
    //printArray(array);
    time=(double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nArray Size (N): %d",SIZE);
    printf("\nTime: %.4f Seconds\n\n",time);

    //Selection Sort
    addElement(array);
    //printArray(array);
    begin=clock();
    selectionSort(array);
    end=clock();
    printf("---Selection Sort---");
    //printArray(array);
    time=(double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nArray Size (N): %d",SIZE);
    printf("\nTime: %.4f Seconds\n\n",time);

    //Quick Sort
    addElement(array);
    //printArray(array);
    begin=clock();
    quickSort(array,0,SIZE-1);
    end=clock();
    printf("---Quick Sort---");
    //printArray(array);
    time=(double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nArray Size (N): %d",SIZE);
    printf("\nTime: %.4f Seconds\n",time);

    return 0;
}
