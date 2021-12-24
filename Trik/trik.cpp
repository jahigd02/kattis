#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    int cup = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' && cup==1)
        {
            cup=2;
        } else 
        if (s[i] == 'A' && cup==2)
        {
            cup=1;
        }else
        if (s[i] == 'A' && cup==3)
        {
            cup=3;
        }else
        if (s[i] == 'B' && cup==1)
        {
            cup=1;
        }else if (s[i] == 'B' && cup==2)
        {
            cup=3;
        }else if (s[i] == 'B' && cup==3)
        {
            cup=2;
        }
        else if (s[i] == 'C' && cup==1)
        {
            cup=3;
        }
        else if (s[i] == 'C' && cup==2)
        {
            cup=2;
        }
        else if (s[i] == 'C' && cup==3)
        {
            cup=1;
        }
    }

    cout << cup;
}