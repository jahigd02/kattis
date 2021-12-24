#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int kg,q,r,b,kt,p;
    cin >> kg >> q >> r >> b >> kt >> p;

    cout << 1 - kg << " " << 1 - q << " " <<  2 - r  << " " << 2 - b << " " << 2 - kt << " " << 8 - p;
}