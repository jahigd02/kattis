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
    int n; cin >> n;
    vector<int> lastDigits;
    for (int i = 0; i < n; i++)
    {
        int N; cin >> N;
        int foo = 1;
        for (int j = 1; j <= N; j++)
        {
            foo *= j;
        }
        lastDigits.push_back(foo%10);
    }
    for (int i = 0; i < lastDigits.size(); i++)
    {
        cout << lastDigits[i] << endl;
    }
}