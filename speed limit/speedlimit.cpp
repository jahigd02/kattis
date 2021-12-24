#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> miles;
    while (n != -1)
    {
        vector<int> speeds;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int t, s; cin >> s >> t;
            speeds.push_back(t);

            if (i==0)
            {
                sum+= s * t;
            } else
            {
                sum+= s * (speeds[i] - speeds[i-1]);
            }
        }
        miles.push_back(sum);
        cin >> n;
    }
    for (int i = 0; i < miles.size(); i++)
    {
        cout << miles[i] << " miles" << endl;
    }
}