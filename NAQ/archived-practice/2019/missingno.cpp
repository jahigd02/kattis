#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> msg;
    vector<int> nums;
    vector<int> guess;
    int flag = 0;

    for (int i = n; i > 0; i--)
    {
        nums.push_back(i);
    }

    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        int g; cin >> g;
        guess.push_back(g);
    }

    while (!guess.empty() && !nums.empty())
    {
        if (nums.back() != guess[cur])
        {
            msg.push_back(nums.back());
            nums.pop_back();
            flag=1;
        } else if (nums.back() == guess.front())
        {
            nums.pop_back();
            cur++;
        }
    }

    for (int i = 0; i < msg.size(); i++)
    {
        cout << msg[i] << endl;
    }

}