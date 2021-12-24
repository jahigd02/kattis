#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int x,y; cin >> x; cin >> y;

    if (x > 0)
    {
        y > 0 ? cout << 1 : cout << 4;
    } else 
    {
        y > 0 ? cout << 2 : cout << 3;
    }
}