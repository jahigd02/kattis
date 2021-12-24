#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string ans = "no hiss";
    string s; cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 's' && s[i+1] == 's' && i!=s.length()-1)
        {
            ans="hiss";
            break;
        }
    }

    cout << ans;
}