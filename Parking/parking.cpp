#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> foobar;
    for (int i = 0; i < n; i++)
    {
        vector<int> bar;
        int t; cin >> t;

        for (int j = 0; j < t; j++)
        {
            int foo; cin >> foo;
            bar.push_back(foo);
        }

        sort(bar.begin(), bar.end());
        int least = bar.front();
        int most = bar.back();
        
        int dist2 = (most - least)*2;
        foobar.push_back(dist2);
    }

    for (int i = 0; i < foobar.size(); i++)
    {
        cout << foobar[i] << endl;
    }
}