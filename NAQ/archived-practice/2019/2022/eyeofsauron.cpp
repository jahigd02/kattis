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
    string s;
    getline(cin,s);

    int l = 0;
    int r = s.length() -1;
    int rc = 0;

    while (s[l] != '(')
    {
        l++;
    }
    while (s[r] != ')')
    {
        r--;
        rc++;
    }

    l == rc ? cout << "correct" : cout << "fix";

}