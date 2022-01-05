#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    char tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
    cout << s;

}