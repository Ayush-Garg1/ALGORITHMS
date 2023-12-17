#include<stdio.h>

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n ; i++){
        int didSwap = 0;
        for(int j = 0; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){

                //SWAPPING
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                // UPDATE THE didSwap VARIABLE
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
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

    // BUBBLE SORTING 
    bubbleSort(arr, n);

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