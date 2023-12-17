#include<stdio.h>

void merge(int arr[], int low, int mid, int high){
    int ans[high - low +1];
    int left = low, right = mid + 1, j = 0;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            ans[j] = arr[left];
            left++;
        }else{
            ans[j] = arr[right];
            right++;
        }
        j++;
    }

    while(left <= mid){
        ans[j] = arr[left];
        left++;
        j++;
    }

    while (right <= high)
    {
        ans[j] = arr[right];
        right++;
        j++;
    }
    
    for(int i = 0; i < j;i++){
        arr[low + i] = ans[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low != high){
        int mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int n){
    printf("{");
    for(int i = 0; i<n ;i++){
        printf("%d",arr[i]);
        if(i < n-1){
            printf(", ");
        }
    }
    printf("}\n");
}

int main(){
    // READING THE ARRAY
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    // MERGE SORT
    mergeSort(arr, 0, n-1);

    printArray(arr, n);

    return 0;
}