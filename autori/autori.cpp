#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    vector<char> small;

    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            small.push_back(s[i]);
        } else if (s[i] == '-')
        {
            small.push_back(s[i+1]);
        }
    }

    for (int i = 0; i < small.size(); i++)
    {
        cout << small[i];
    }

}