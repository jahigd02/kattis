#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n, k; cin >> n >> k;
    float kRate = 0;
    for (int i = 0; i < k; i++)
    {
        int bar; cin >> bar; kRate+=bar;
    }

    float min = ((((n-k) * -3)) + kRate) / n ;
    float max = (((n-k) * 3 ) + kRate) / n;

    cout << min << " " << max;

}