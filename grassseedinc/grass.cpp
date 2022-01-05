#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
   long double C; int L; cin >> C; cin >> L;
   long double runSum = 0;
   for (int i = 0; i < L; i++)
   {
       long double w, l; cin >> w >> l;
       runSum+=w*l;
   } 
   runSum*=C;
   cout.precision(8);
   cout << fixed << runSum;

}