#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    vector<int> log;
    for (int i = 0; i < t; i++)
    {
        int n; cin >> n;
        set<string> cities;
        int num = 0;
        for (int j = 0; j < n; j++)
        {
            string s; cin >> s;
            cities.insert(s);
        }
        for (auto it = cities.begin(); it != cities.end(); it++)
        {
            num++;
        }
        log.push_back(num);
    }

    for (int i = 0; i < log.size(); i++)
    {
        cout << log[i] << endl;
    }
}