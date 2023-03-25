#include<iostream>
using namespace std;

int findduplicate(int arr[], int n) {
    int ans = 0;

    for(int i = 0; i<n; i++) {
        ans = ans ^ arr[i] ^ i;
    }
    //  for(int i = 0; i<n; i++) {
    //     ans = ans ^ i;
    //  }
    cout << ans << endl;
}

printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
int main() {
    int arr [7] = {6, 3, 1, 5, 4, 4, 2};

   
    findduplicate(arr, 7);


 return 0;   
}

