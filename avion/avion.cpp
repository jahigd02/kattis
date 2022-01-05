#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    vector<int> lines;
    for (int i = 0; i < 5; i++)
    {
        string s; cin >> s;

        if (s.length() < 3)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (j < s.length()-2)
                {
                  if (s[j] == 'F' && s[j+1] == 'B' && s[j+2] == 'I')
                    {
                      lines.push_back(i+1);
                    }
                }
            }
        }
    }
    if (lines.size() != 0)
    {
        for (int i = 0; i < lines.size(); i++)
            {
                cout << lines[i];
                if (i!=lines.size()-1)
                {
                    cout << " ";
                }
            }
    } else { cout << "HE GOT AWAY!";}
    
}