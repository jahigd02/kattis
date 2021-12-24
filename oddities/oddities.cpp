#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x; nums.push_back(x);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i]%2==0 ? cout << nums[i] << " is even" : cout << nums[i] << " is odd";
        cout << endl;
    }
}