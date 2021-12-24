#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    long double a,b,c; cin >> a >> b >> c;
    long double foo = a * (b/c);

    printf("%.9Lf", foo);
}