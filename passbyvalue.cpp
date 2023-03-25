#include<iostream>
using namespace std;

// void dummy(int n) {
//     n++;
//     cout << "n is " << n <<endl;


// }

// int main () {
//     int n;
//     cin >> n;
//     dummy(n);
//     cout << "number is " << n <<endl;
// }


void update (int a) {
   a-=5;
    cout << a << endl;
     
}
int main () {
    int a  = 15;
    update(a);
    cout << a <<endl;
}