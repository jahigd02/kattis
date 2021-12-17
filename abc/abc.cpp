#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    string s; cin >> s;

    vector<int> v;
    v.push_back(x); v.push_back(y); v.push_back(z);
    sort(v.begin(), v.end());

    if (s == "ABC")
    {
        cout <<  v.at(0)<< " " << v.at(1)<< " " << v.at(2);
    } else if ( s == "ACB")
    {
        cout << v.at(0)<< " " << v.at(2)<< " " << v.at(1);
    } else if ( s == "BAC")
    {
        cout << v.at(1) << " "<< v.at(0) << " "<< v.at(2);
    } else if ( s == "BCA")
    {
        cout << v.at(1)<< " " << v.at(2) << " "<< v.at(0);
    } else if ( s == "CAB")
    {
        cout << v.at(2) << " "<< v.at(0) << " "<< v.at(1);
    } else if ( s == "CBA")
    {
        cout << v.at(2) << " "<< v.at(1) << " "<< v.at(0);
    }
    

    
}