#include<iostream>
using namespace std;

void reverse (string& str, int i) {

    cout << "call recieved for  " << str << endl;
    int n = str.size();
    if(i > n-i-1) {
        return;

    }

    swap(str[i] , str[n-i-1]);
    i++;
    

    reverse(str, i );
}

int main () {
    string name = "ASUTOSH";

    reverse (name , 0);
    cout << name << endl;
}