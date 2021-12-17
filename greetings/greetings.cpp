#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'e')
        {
            num++;
        }
    }
    cout << "h";
    for (int i = 0; i < num*2; i++)
    {
        cout << "e";
    }
    cout << "y";
}