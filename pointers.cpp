#include<iostream>
using namespace std;

void print (int *p) {
    cout << p << endl;
}

void update(int *p) {
   *p = *p+1;
    // cout << "updated p "<< p;
}

int getSum (int *arr, int n) {

    // cout <<sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    // int temp[10] = {1,2};

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl; 
    // cout << sizeof(*ptr) << endl; 
    // cout << sizeof(&ptr) << endl; 

    // int arr[10];
    // //    ERROR
    // // arr = arr+1;

    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // ptr = ptr+1;
    // cout << ptr << endl;


    // int value = 5;
    // int *p = &value; 

    // // print (p);
    // cout << "before " << *p << endl;
    // update(p);
    // cout << "after " << *p << endl;

    // int arr[6] = {1,2,3,4,5,8};

    // cout << "Sum is " << getSum(arr+3 ,6) << endl;


    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    cout << &ptr << endl;
    cout << ptr2 << endl;

}