#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int a, b; cin >> a >> b;
    int A, B;
    A = ((a%10)*100)+((a%100) - (a%10))+((a - (a%100))/100);
    B = ((b%10)*100)+((b%100) - (b%10))+((b - (b%100))/100);
    A > B ? cout << A : cout << B;
}