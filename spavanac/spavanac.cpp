#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int h,m; cin >> h >> m;
    if (m >= 45)
    {
        cout << h << " " << m - 45;
    } else
    {

        int rem = 60 + (m - 45);

        if (h == 0)
        {
            cout << 23 << " " << rem;
        } else
        {cout << h-1 << " " << rem;}
    }
}