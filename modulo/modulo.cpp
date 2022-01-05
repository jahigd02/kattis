#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        int n; cin >> n;
        s.insert(n%42);
    }

    int count = 0;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        count++;
    } cout << count;
}