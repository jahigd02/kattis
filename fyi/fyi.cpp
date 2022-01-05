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
    string prefix = s.substr(0,3);
    prefix == "555" ? cout << 1 : cout << 0;

}