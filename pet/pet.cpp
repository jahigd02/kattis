#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    vector < pair<int,int> > scores;
    for (int i = 0; i < 5; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        scores.push_back( make_pair(a+b+c+d,i+1));
    }

    sort(scores.begin(), scores.end());

    cout << scores.back().second << " " << scores.back().first;
}