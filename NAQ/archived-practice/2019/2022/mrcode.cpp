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
    int C, N;
    cin >> C >> N;
    vector<int> corrno;
    vector<int> errs;

    vector <string> correct;
    vector <string> wrongs;

    for (int i = 0; i < N; i++)
    {
        int foo; cin >> foo;
        errs.push_back(foo);
    }

    for (int i = 0; i < C; i++)
    {
        corrno.push_back(i+1);
    }

    for (int i = 0; i < corrno.size(); i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(corrno[i] == errs[j])
            {
                corrno.erase(corrno.begin() + i);
            }
        }
    }

    //process corrno
    while (!corrno.empty())
    {
        int it = 1;
        int foo = corrno[0];
        while (corrno[it] == foo+1)
        {
            foo = corrno[it];
            it++;
        }
        string str1 = to_string(corrno[0]);
        string str2 = to_string(foo);
        if (corrno[0] != foo)
        {
            correct.push_back(str1 + "-" + str2);
        } else
        {
            correct.push_back(str1);
        }
        

        for (int i = 0; i < it; i++)
        {
            corrno.erase(corrno.begin());
        }
        
    }

    while (!errs.empty())
    {
        int it = 1;
        int foo = errs[0];
        while (errs[it] == foo+1)
        {
            foo = errs[it];
            it++;
        }
        string str1 = to_string(errs[0]);
        string str2 = to_string(foo);
        if (errs[0] != foo)
        {
            wrongs.push_back(str1 + "-" + str2);
        } else
        {
            wrongs.push_back(str1);
        }
        

        for (int i = 0; i < it; i++)
        {
            errs.erase(errs.begin());
        }
        
    }

    cout << "Errors: ";
    for (int i = 0; i < wrongs.size(); i++)
    {
        if (i != wrongs.size()-2 && i != wrongs.size() -1)
        {
            cout << wrongs[i] << ", ";
        } else if (i == wrongs.size() - 2)
        {
            cout << wrongs[i] << " and ";
        } else if (i == wrongs.size()-1)
        {
            cout << wrongs[i] << endl;
        }
        
    }
    cout << "Correct: ";
    for (int i = 0; i < correct.size(); i++)
    {
        if (i == correct.size() - 2)
        {
            cout << correct[i] << " and ";
        } else if (i == correct.size() -1)
        {
            cout << correct[i];
        }
        else
        {
            cout << correct[i] << ", ";
        }

    }
}