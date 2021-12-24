#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> nums;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int power;

        int foo; cin >> foo;
        power = foo % 10;
        foo = foo/10;
        int bar = pow(foo, power);
        nums.push_back(bar);
    }

    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    cout << sum;
}