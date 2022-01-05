#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '<')
        {
            int j = i;
            int count = 0;
            while (s[j] == '<')
            {
                count++;
                j++;
            }
            int l = i;
            for (int k = 0; k < count; k++)
            {
                l--;
                s[l] = '0';
            }
            i+=count;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '<' && s[i] != '0')
        {
            cout << s[i];
        }
    }
}