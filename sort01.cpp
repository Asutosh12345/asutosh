#include <iostream>
using namespace std;

void sort01(int arr[], int n)
{
    int left = 0;
   bint right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {1, 0, 1, 0, 0, 1};

    sort01(arr, 7);
    printArray(arr, 7);

    return 0;
}