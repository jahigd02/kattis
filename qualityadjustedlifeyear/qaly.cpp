#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double q, y; cin >> q >> y;
        sum += q * y;
    }

    cout << sum;
}