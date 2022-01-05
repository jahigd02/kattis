#include <iostream>
#include <string>
#include <set>
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
        int bar; cin >> bar; foo+=bar;
    }

    cout << foo;

}