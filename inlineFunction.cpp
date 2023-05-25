#include<iostream>
using namespace std;

 inline int getMax(int& a, int& b) {
    // if(a>b) {
    //     ans = a;
    // } else {
    //     ans = b;
    // }

    return (a>b) ? a : b;  // inline code should not be greter than 3 lines of code
}

int main () {
    int a = 1, b = 2;
    int ans = 0;

    ans =  getMax(a,b);
    cout << ans << endl;

    a = a+3;
    b = b + 1;

    ans =  getMax(a,b);
    cout << ans << endl;


    return 0;
}