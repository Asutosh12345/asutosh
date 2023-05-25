#include<iostream>
using namespace std;

// int factorial (int n) {
//     if(n == 0) {
//         return 1;
    
//     }

//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;

//     return biggerProblem;

// }

// int main () {
//     int n;
//     cin >> n;

//     int ans = factorial(n);

//     cout << ans << endl;
// }





// void print(int n) {
//     if(n == 0) {
//         return ;
//     }    

//     print (n-1);

//     cout << n << endl;

// }

// int main () {
//     int n;
//     cin >> n;

//     print(n);

    
// }

void reachHome(int src, int dest) {

    cout << "source " << src << " destination " << dest <<  endl;
 
    if(src == dest) {
        cout << "reach the destination " << endl;
        return;
    }

    src++;

    reachHome(src, dest);   // recursive call
}


int main () { 
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
}