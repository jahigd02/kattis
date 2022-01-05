#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

bool hasSmile (string s, int iter);

int main()
{
    vector<int> smiles;
    string s; getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (hasSmile(s, i) == true)
        {
            smiles.push_back(i);
        }
    }

    for (int i = 0; i < smiles.size(); i++)
    {
        cout << smiles[i] << endl;
    }

}

bool hasSmile (string s, int iter)
{
    bool found = false;
    if ( (s[iter] == ':' || s[iter] == ';') && s[iter+1] == '-' && s[iter+2] == ')')
        {
            found = true;
        }
    else if ( (s[iter] == ':' || s[iter] == ';') && s[iter+1] == ')')
        {
            found = true;
        }
    return found;
}