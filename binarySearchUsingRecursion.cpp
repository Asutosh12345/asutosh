#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {
    for(int i = s; i<=e; i++) {
        cout << arr[i] <<" ";
    }   cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k) {
    

    print (arr, s, e);

    if(s>e) {
        return false;
    }
    int mid = s+(e-s)/2;

    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr,mid+1,e,k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main () {
    int arr[6] = {1,2,3,4,5,6};
    cout << endl;
    
    int key = 6;

    
    
    cout << "present or not " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}