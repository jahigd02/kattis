#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<string> possible;
    for (int i = 0; i < n; i++)
    {
        float a, b, c; cin >> a >> b >> c;
        if(a+b == c || a-b == c || b-a == c || a*b == c || a/b == c || b/a == c)
        {
            possible.push_back("Possible");
        } else
        {
            possible.push_back("Impossible");
        }
    }
    for (int i = 0; i < possible.size(); i++)
    {
        cout << possible[i] << endl;
    }
}