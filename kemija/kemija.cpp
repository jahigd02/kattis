#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; getline(cin,s);
    vector<char> sentence;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            i+=2;
        }
        sentence.push_back(s[i]);
    }
    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i];
    }
}