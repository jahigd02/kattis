#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int num; cin >> num;
    vector<int> list;

    for (int i = 0; i < num; i++)
    {
        int foo; cin >> foo;
        list.push_back(foo);
    }

    for (int i = 0; i < num; i++)
    {
        int foo = list.back();
        list.pop_back();
        cout << foo << endl;
    }
    
}