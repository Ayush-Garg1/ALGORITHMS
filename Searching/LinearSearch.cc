#include<iostream>
using namespace std;



// TIME COMPLEXITY : O(N)
// SPACE COMPLEXITY : O(1)

// ADVANTAGES : 
//     SIMPLICITY
//     NO PRE-SORTED DATA REQUIRED

// DISADVANTAGES : 
//     INEFFICIENT
//     NOT SUITABLE FOR LARGE DATASETS



int search(int arr[], int n, int k){
    for(int i = 0; i<n ; i++){
        if(arr[i] == k){
            return i+1;
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
    int index = search(arr, n, k);
    ((index == -1) ? (cout << "Not found") : (cout << "Found at " << index) );
    

    return 0;
}