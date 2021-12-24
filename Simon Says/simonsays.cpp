#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n; cin >> ws;
    vector<string> foos;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        if (s.substr(0,10) == "Simon says")
        {
            foos.push_back(s.substr(10,99));
        }
    }

    for (int i = 0; i < foos.size(); i++)
    {
        cout << foos[i] << endl;
    }
}