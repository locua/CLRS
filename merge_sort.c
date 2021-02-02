#include <math.h>
#include <stdio.h>

void printArr(int arr[], int size){
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void MERGE(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;    
    
    //float L[n1+1], R[n2+1]; // for sentinals
    float L[n1], R[n2]; // 

    for(int i = 0; i < n1; i++){
        L[i] = arr[low + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + j+1];
    }

    /* Sentinals */
    //L[n1] = INFINITY; 
    //R[n2] = INFINITY;

    int i =0, j = 0, k = low;
    while(k <= high){
        if(i >= n1 || j >= n2){
            break; 
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
    if(i>=n1){
        while(k<=high){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    if(j>=n2){
        while(k<=high){
            arr[k] = L[i];
            i++;
            k++;
        }
    }
    
} 


void MERGE_SORT(int arr[], int low, int high){
    //int arr_size = sizeof(arr) / sizeof(arr[0]);
    //arr_size=13;
    //printArr(arr, arr_size);
    if(low < high){
        int mid = floor((low+high)/2);
        MERGE_SORT(arr, low, mid);
        MERGE_SORT(arr, mid+1, high);
        MERGE(arr, low, mid, high);
    } 
}


int main()
{
    int arr[14] = {69,31,1,18,700,47,25,6,8,73,6,5,67,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, arr_size);
    MERGE_SORT(arr, 0, arr_size-1);
    printArr(arr, arr_size);
    return 0;
}      
