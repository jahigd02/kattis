#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    vector<ll> foos;

    ll x, y;
    while (cin >> x >> y)
    {
        ll foo = abs (x - y);
        foos.push_back(foo);
    }

    for (int i = 0; i < foos.size(); i++)
    {
        cout << foos[i] << endl;
    }

    
}