#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<string> foo;
    for (int i = 0; i < n; i++)
    {
        int r, e, c; cin >> r >> e >> c;
        int adv = e - c;
        if(r==adv)
        {
            foo.push_back("does not matter");
        } else
        {
            r > adv ? foo.push_back("do not advertise") : foo.push_back("advertise");
        }
    }

    for (int i = 0; i < foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
}