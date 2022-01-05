#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

typedef struct name {
    string name;
    int value;
} N;

bool cmp (const N& a, const N& b)
{
    return a.value < b.value;
}

int main()
{
    vector<string> sorted;
    int n; cin >> n; cin.clear();
    while (n!=0)
    {
        vector<N> temp;
        for (int i = 0; i < n; i++)
        {
            string s; cin >> s;
            int foo = s[0] + s[1];
            N entry; entry.name = s; entry.value = foo;
            temp.push_back(entry);
        }

        sort(temp.begin(), temp.end(), cmp);
        for (int i = 0; i < temp.size(); i++)
        {
            sorted.push_back(temp[i].name);
        }
        sorted.push_back(" ");
        cin >> n;
    }
    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << endl;
    }
}