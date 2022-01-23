#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int digSum(int num);

int main()
{
    int L, D, X; cin >> L >> D >> X;
    int count = L;
    while (digSum(count) != X)
    {
        count++;
    }
    cout << count << "\n";
    count = D;
    while (digSum(count) != X)
    {
        count--;
    }
    cout << count;
}

int digSum(int num)
{
    int ans = 0;
    string numStr = to_string(num);
    for(int i = 0; i < numStr.length(); i++)
    {
        ans+=numStr[i]-48;
    }
    return ans;
}