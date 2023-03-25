#include<iostream>
using namespace std;


//  Given an array of integers nums, calculate the pivot index of this array.

//  The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

//  If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

//  Return the leftmost pivot index. If no such index exists, return -1.

 

    int pivotIndex(int arr[], int nums) {
        
    int sum = 0;
    for(int i = 0; i<nums; i++) {
        sum +=arr[i];
    }

    int leftsum = 0;
    for(int i = 0; i < nums; i++){
        leftsum+=arr[i];
        if(leftsum == sum) {
            return i;
           
        }
         leftsum+=arr[i];
        
    }
    return -1;
    }
int main () {
    int nums[7] = {1,7,3,1,5,2};
    cout << "pivot is " << pivotIndex(nums, 7) << endl;
}