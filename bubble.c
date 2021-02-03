#include <stdio.h>

void printArr(int array[], int size){
    int i;
    printf("{");
    for(i = 0; i < size; i++)
        printf(" %d ", array[i]);
    printf("}\n");
}
void BUBBLESORT(int arr[], int len){  
    for(int i = 0; i < len-2; i++){
        for(int j = len-1; j >= i+1; j--){
            if(arr[j] < arr[j - 1]){
                // swap elements
                printf("swapped %d and %d \n", arr[j], arr[j-1]);
                int tmp = arr[j];
                arr[j] = arr[j - 1]; 
                arr[j - 1] = tmp;
                printArr(arr, 6);
            } 
        }
    }
}
int main(){
    int a[6] = {6, 2, 4, 1, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    printArr(a,len);
    BUBBLESORT(a, len);
    printArr(a, 6);
    return 0;
}
