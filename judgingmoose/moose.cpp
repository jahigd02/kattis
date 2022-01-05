#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int l, r; cin >> l >> r;
    if (l == r && l != 0)
    {
        cout << "Even " << l*2;
    } else
    {
        if (l == 0 && r == 0)
        {
            cout << "Not a moose";
        }
        else
        {
            l > r ? cout << "Odd " << l * 2 : cout << "Odd " << r * 2;
        }
    }
}