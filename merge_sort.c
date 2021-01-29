#include <math.h>
#include <stdio.h>

void MERGE(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;    
    
    float L[n1], R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i - 1];
    }
    for(int j = 0; j < n1; j++)
    {
        R[j] = arr[q + j];
    }

    L[n1+1] = INFINITY;
    R[n2+1] = INFINITY;
    int i, j = 1;

    for(int k = p; k < r; k++)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
        }
        else 
        {
            arr[k] = R[j];
        }
    }
} 

int main()
{

    return 0;
}      
