#include<iostream>
using namespace std;



// TIME COMPLEXITY : O( LOG(N) )
// SPACE COMPLEXITY : O(1)

// ADVANTAGES : 
//     EFFICIENT
//     APPLICABILITY FOR SORTED DATA

// DISADVANTAGES : 
//     SORTED DATA REQUIRED
//     NOT SUITABLE FOR UN-ORDERED DATASETS

int binarySearch(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = end + (start - end)/2;
        if(k == arr[mid]){
            return mid;
        }
        if(k < arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    
    // READING THE DATA

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    // SEARCHING FOR THE KEY K
    int k;
    cin >> k;
    
    // SEQUENTIAL SEARCH 
    int index = binarySearch(arr, n, k);
    ((index == -1) ? (cout << "Not found") : (cout << "Found at " << index+1) );
    

    return 0;
}