#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    int foo = 0;
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        if (t < 0)
        {
            foo++;
        }
    }

    cout << foo;
}