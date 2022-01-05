#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int N; char B; cin>>N>>B;
    int runSum = 0;
    for(int i=0;i<4*N;i++)
    {
        string s; cin >>s;
        char val, suit; val=s[0]; suit=s[1];


        if (val=='A')
        {
            suit==B ? val = 11 : val = 11;
        } else if (val=='K')
        {
            suit==B ? val = 4 : val = 4;
        } else if (val=='Q')
        {
            suit==B ? val = 3 : val = 3;
        } else if (val=='J')
        {
            suit==B ? val = 20 : val = 2;
        } else if (val=='T')
        {
            suit==B ? val = 10 : val = 10;
        } else if (val=='9')
        {
            suit==B ? val = 14 : val = 0;
        } else if (val=='8' || val == '7')
        {
            val=0;
        }
        

        runSum+=val;
    }
    cout << runSum;
}