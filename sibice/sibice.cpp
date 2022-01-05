#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, w, h; cin >> n >> w >> h;
    int diag = sqrt((w*w) + (h*h));

    vector<string> fits;

    for (int i = 0; i < n; i++)
    {
        int len; cin >> len;
        if (len <= w || len <= h || len <= diag)
        {
            fits.push_back("DA");
        } else
        {
            fits.push_back("NE");
        }
    }

    for (int i = 0; i < fits.size(); i++)
    {
        cout << fits[i] << endl;
    }
}