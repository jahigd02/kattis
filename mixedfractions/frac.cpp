#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n, d; cin >> n >> d;
    cin.sync();
    while (n != 0 && d != 0)
    {
        cout << n/d << " " << n%d << " / " << d << endl;
        cin >> n >> d;
    }

}