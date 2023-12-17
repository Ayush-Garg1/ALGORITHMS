#include<iostream>
using namespace std;

// HASHING

int main(){
    int u;
    cout << "maximum Element : ";
    cin >> u;
    cout << "Size of Array : ";
    int n;
    cin >> n;
    cout << "Enter the elements : ";
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
    }

    int hashh[u+1] = {0};
    for(int i = 0; i<n ;i++){
        hashh[arr[i]] += 1;
    }

    cout << "Enter the no. of queries : ";
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << "Frequency of " << num << ": " << hashh[num] << endl;
    }

    return 0;
}