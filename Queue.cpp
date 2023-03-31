#include<iostream>
#include<queue>

using namespace std;

int main () {
    queue <string> s;


        s.push("asu"); 
        s.push("kumar"); 
        s.push("babbar"); 

        cout << "top element " << s.front() << endl;

        s.pop();
        cout << "top element " << s.front() << endl;

        cout << "size of queue " << s.size() << endl;
}