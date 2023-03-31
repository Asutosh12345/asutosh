#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    vector<int> a(6, 1);

    vector<int> last(a);

    cout << "print last " << endl;

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity-> " << v.capacity() << endl;
    cout <<"size->" << v.size() << endl;
}