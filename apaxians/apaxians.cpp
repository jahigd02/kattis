#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; vector<char> newName;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i+1] != s[i] && (i != s.length()))
        {
            newName.push_back(s[i]);
        }
    }

    for (char c : newName)
    {
        cout << c;
    }
}