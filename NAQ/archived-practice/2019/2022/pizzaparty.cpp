#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;

struct Pizza
{
    string name;
    vector <string> reqs;
    int soft = 1;
    int valid = 0;
};

int main()
{
    vector<Pizza> orders;
    int total;

    int c; cin >> c;
    cin >> ws;
    for (int i = 0; i < c; i++)
    {
        Pizza newPiz;

        string str;
        getline(cin, str);
        vector<string> parsed;
        string piece;
        istringstream iss(str);

        while(iss >> piece)
        {
            parsed.push_back(piece);
        }
        if (parsed.size() == 1)
        {
            newPiz.name = parsed[0];
        } else
        {
            for (int j = 0; j < parsed.size(); j++)
            {
                if (parsed[j] == "and")
                {
                    newPiz.soft = 0;
                } 
                if (parsed[j] == "if" || parsed[j] == "and" || parsed[j] == "or")
                {
                    newPiz.reqs.push_back(parsed[j+1]);
                } else if (parsed[j] == "then")
                {
                    newPiz.name = parsed[j+1];
                }
            }
        }
        orders.push_back(newPiz);
    }    
    /*
    for (int i = 0; i < orders.size(); i++)
    {
        for (int j = 0; j < orders[i].reqs.size(); j++)
        {
            cout << orders[i].reqs[j] << endl;
        }
    }
    */
   for (int i = 0; i < orders.size(); i++)
   {
       if (!orders[i].reqs.empty())
       {
           int count = 0;
           for (int j = 0; j < orders[i].reqs.size(); j++)
           {
               
               for (int k = 0; k < orders.size(); k++)
               {
                   if (orders[k].name == orders[i].reqs[j])
                   {
                       count++;
                   }
               }
           }
           if (count == 0)
           {
               orders[i].valid = 0;
           } else if (count < orders[i].reqs.size() && orders[i].soft == 1)
           {
               orders[i].valid = 1;
           } else if (count < orders[i].reqs.size() && orders[i].soft == 0)
           {
               orders[i].valid = 0;
           } else
           {
               orders[i].valid = 1;
           }
       } else
       {
           orders[i].valid = 1;
       }
   }

   for (int i = 0; i < orders.size(); i++)
   {
       if (orders[i].valid == 1)
       {
           total++;
       }
   }

   cout << total << flush;
}