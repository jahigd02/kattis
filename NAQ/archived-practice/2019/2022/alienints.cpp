#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

int n;
string str;

int isAlien(int cmp);

int main()
{
    cin >> n;
    str = to_string(n);
    set<int> nset;
    
    //vector <int> test;

    int imp = 0;
    /*
    for (int i = 0; i < 10; i++)
    {
        test.push_back(i);
    }
    */
    set<int> test;
    for (int i = 0; i < 10; i++)
    {
        test.insert(i);
    }
    /*
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < test.size(); j++)
        {
            if (str[i]-48 == test[j])
            {
                test.erase(test.begin() + j);
            }
        }
    }
    */
    //cout << test.empty();
    /*
    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i];
    }
    */
    vector <int> tmp;
    for (int i = 0; i < str.length(); i++)
    {
        tmp.push_back(str[i]-48);
    }

    for (int i = 0; i < tmp.size(); i++)
    {
        if (i == 0 && tmp[0] == 0)
        {
            nset.insert(0);
            continue;
        } else
        {
            nset.insert(tmp[i]);
        }
        
    }
    
    if (nset == test)
    {
        imp = 1;
    } else
    {
        imp = 0;
    }
    
    if (imp == 1)
    {
        cout << "Impossible";
    } else
    {
        int it = 1;
        while (isAlien(n - it) == 0 && isAlien(n + it) == 0)
        {
           it++;
        }

        if (imp == 0)
       {
           if (isAlien(n - it) == 1 && isAlien(n + it) == 1)
         {
               cout << n - it << " " << n + it;
          }
          else if (isAlien(n - it) == 1 && isAlien(n+it) == 0)
         {
             cout << n - it;
         } else if (isAlien(n - it) == 0 && isAlien(n+it) == 1)
            {
                cout << n + it;
         }
        }
    }
}

int isAlien(int cmp)
{
    
    string cs = to_string(cmp);

    vector <int> test;

    for (int i = 0; i < cs.length(); i++)
    {
        test.push_back(cs[i] - 48);
    }

    /*
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < test.size(); j++)
        {
            if (str[i]-48 == test[j])
            {
                test.erase(test.begin() + j);
            }
        }
    }

    if (!test.empty())
    {
        return 1;
    } else
    {
        return 0;
    }
    */
    int same = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < test.size(); j++)
        {
            if (str[i]-48 == test[j])
            {
                same++;
            }
        }
    }

    if (same == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}