#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int harshad(int num);

int main()
{
    string s; cin >> s;
    int count = stoi(s);
    while (count % harshad(count) > 0)
    {
        count++;
    }
    cout << count;
}

int harshad(int num)
{
    int ans = 0;
    string numS; numS = to_string(num);
    for (int i = 0; i < numS.length(); i++)
    {
        ans+=numS[i]-48;
    }
    return ans;
}