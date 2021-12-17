#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int x,y,n;
    cin >> x >> y >> n;

    for (int i = 1; i < n+1; i++)
    {
        string s;
        if (i % x == 0 && i % y == 0)
        {
            s = "FizzBuzz";
        } 
        else if (i % x == 0 || i % y == 0)
        {
            if (i % x == 0)
            {
                s = "Fizz";
            } else 
            {
                s = "Buzz";
            }
        }
        else
        {
            s = to_string(i);
        }
        cout << s << endl;
    }
}