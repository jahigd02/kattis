#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin>>n;
    double sum, num = 0;
    for(int i = 0; i < n; i++)
    {
        int val; 
        cin >> val;
        if (val>=0)
        {
            sum+=val;
            num++;
        }
    }
    double avg = sum/num; 
    cout << avg;

}