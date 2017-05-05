#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void printMatrix(float A[][4])
{
    int p=3;
    int q=4;

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout << setw(7) << setprecision(4) << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rowReduce(float A[][4])
{
    const int nrows=3;
    const int ncols=4;
    int lead=0;

    while(lead<nrows)
    {
        float d,m;

        for(int r=0;r<nrows;r++)
        {
            d=A[lead][lead];
            m=A[r][lead] / A[lead][lead];

            for(int c=0;c<ncols;c++)
            {
                if(r==lead)
                    A[r][c] /= d;
                else
                    A[r][c] -= A[lead][c] * m;
            }
        }
        lead++;
        printMatrix(A);
    }
}

int main()
{
    float A[3][4] = {{1, 1, 1, 3},
                     {1, 2, 3, 0},
                     {1, 3, 4, -2}};
                     //Answer : {5, -1, -1}
    printMatrix(A);
    rowReduce(A);
}
