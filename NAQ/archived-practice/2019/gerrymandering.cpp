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
    int P, D;
    cin >> P >> D;

    double twva, twvb;
    int v;

    struct Dist
    {
        int a;
        int b;
    };

    vector <Dist> vd;

    for (int i = 0; i < D; i++)
    {
        Dist newD;
        newD.a = 0;
        newD.b = 0;
        vd.push_back(newD);
    }

    for (int i = 0; i < P; i++)
    {
        int _p, _a, _b;
        cin >> _p >> _a >> _b;

        v+=_a;
        v+=_b;

        vd[_p - 1].a += _a;
        vd[_p - 1].b += _b;
    }

    for (int i = 0; i < vd.size(); i++)
    {
        int _a = vd[i].a;
        int _b = vd[i].b;

        int wasted = min(_a,_b) - (floor(_a+_b) + 1);

        _a > _b ? cout << "A " : cout << "B ";
        if (_a > _b)
        {
            int wva = _a - (floor((_a+_b)/2) +1);
            cout << wva << " " << _b;
            twva+=wva;
            twvb+=_b;
            
        } else
        {
            int wvb = _b - (floor((_a+_b)/2) + 1);
            cout << _a << " " << wvb;
            twva+=_a;
            twvb+=wvb;
        }
        cout << "\n";

    }
    
    cout << (abs(twva-twvb)/v)*1.0;

}