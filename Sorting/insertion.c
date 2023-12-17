#include<stdio.h>

void insertionSort(int arr[], int n){
    for(int i = 0; i<n ; i++){
        // SWAPPING TILL CAN BE SWAPPED
        for(int j = i ;j >0 ;j--){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }else{
                break;
            }
        }
    }
}

int main(){
    // READING THE ARRAY
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    // INSERTION SORTING 
    insertionSort(arr, n);

    // PRINT SORTED ARRAY
    printf("{");
    for(int i = 0; i<n ;i++){
        printf("%d",arr[i]);
        if(i < n-1){
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}