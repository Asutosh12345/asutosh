#include<iostream>
using namespace std;

int &func(int n) {
    int ans = 3;
    int &ptr = ans;
    return ans;   // warning
}

int *fun(int n) {
    int *ptr = &n;
    return ptr;
}

void update1(int n) {
    n++;
}

void update2(int &n) {
    n++;
}

int main () {
    // int i = 5;
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i<< endl;

    int n = 10;
    cout << "before " << n <<endl ;
    update2(n);
    cout << "after " << n << endl;

    func(n);
    fun(n);
 }