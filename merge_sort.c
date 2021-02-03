#include <math.h>
#include <stdio.h>

void printArr(int arr[], int size){
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void MERGE_SORT(int arr[], int low, int high){
    if(low < high){
        int mid = floor((low+high)/2);
        MERGE_SORT(arr, low, mid);
        MERGE_SORT(arr, mid+1, high);
        /* MERGE PROCEDURE */
        int n1 = mid - low + 1;
        int n2 = high - mid;    
        float L[n1], R[n2];

        for(int i = 0; i < n1; i++){
            L[i] = arr[low + i];
        }
        for(int j = 0; j < n2; j++){
            R[j] = arr[mid + j+1];
        }

        int i =0, j = 0, k = low;
        while(k <= high){
            if(i>=n1){
                arr[k]=R[j]; 
                j++;
                k++;
                continue;
            } 
            if(j>=n2){
                arr[k]=L[i]; 
                i++;
                k++;
                continue;
            }
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
    } 
}


int main()
{
    int arr[14] = {69,31,1,18,700,47,69,6,8,73,6,5,67,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, arr_size);
    MERGE_SORT(arr, 0, arr_size-1);
    printArr(arr, arr_size);
    return 0;
}      
