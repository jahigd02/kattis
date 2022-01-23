#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> mult;
    int big;
    int hasMain = 0;
    for (int i = 0; i < n; i++)
    {
        int foo; cin >> foo;
        if (hasMain == 0)
        {
            big = foo;
            hasMain = 1;
            continue;
        } else
        {
            if (foo % big == 0)
            {
                hasMain = 0;
                mult.push_back(foo);
            }
        }
    }
    for (int i = 0; i < mult.size(); i++)
    {
        cout << mult[i] << endl;
    }

}