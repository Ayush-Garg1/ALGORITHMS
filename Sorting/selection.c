#include<stdio.h>

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1;i++){
        int min = i;
        for(int j = i ; j<n ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        // SWAPPING
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    // SELECTION SORTING 
    selectionSort(arr, n);

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