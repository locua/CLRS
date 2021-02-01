#include <math.h>
#include <stdio.h>

void MERGE(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;    
    
    float L[n1+1], R[n2+1];

    for(int i = 0; i < n1; i++){
        L[i] = arr[low + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + j+1];
    }

    L[n1] = INFINITY;
    R[n2] = INFINITY;

    int i = 0;
    int j = 0;

    for(int k = low; k <= high; k++){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i = i + 1;
        }
        else {
            arr[k] = R[j];
            j = j + 1;
        }
    }
} 


void MERGE_SORT(int arr[], int low, int high){
    if(low < high){
        int mid = floor((low+high)/2);
        MERGE_SORT(arr, low, mid);
        MERGE_SORT(arr, mid+1, high);
        MERGE(arr, low, mid, high);
    } 
}

void printArr(int arr[], int size){
    int i = 0;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
} 

int main()
{
    int arr[14] = {4,3,1,8,7,4,5,6,8,3,4,5,67,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, arr_size);
    MERGE_SORT(arr, 0, arr_size-1);
    printArr(arr, arr_size);
    return 0;
}      
