#include<iostream>
#include<stack>

using namespace std;

int main () {
    stack <string> s;


        s.push("asu"); 
        s.push("kumar"); 
        s.push("babbar"); 

        cout << "top element " << s.top() << endl;

        s.pop();
        cout << "top element " << s.top() << endl;

        cout << "size of stack " << s.size() << endl;
}