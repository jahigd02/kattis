#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> appliances;
    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        int foo = 0;
        for (int j = 0; j < k; j++)
        {
            int bar; cin >> bar;
            foo+=bar;
        }
        foo = foo - (k-1);
        appliances.push_back(foo);
    }
    for (int i = 0; i < appliances.size(); i++)
    {
        cout << appliances[i] << endl;
    }
}