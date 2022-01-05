#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    int n = 0;
    vector<string> guesses;
    while (n != -1)
    {
        cin >> n;
        vector<int> addorder;
        vector<int> remorder;
        for (int i = 0; i < n; i++)
        {
            int op, x; cin >> op >> x;

            if (op == 1)
            {
                addorder.push_back(x);
            } else
            {
                remorder.push_back(x);
            }
        }

        vector<int> queue = addorder;
        vector<int> stack = addorder; reverse(stack.begin(), stack.end());
        vector<int> priorityqueue = addorder; sort(priorityqueue.begin(), priorityqueue.end()); reverse(priorityqueue.begin(), priorityqueue.end());
        if (remorder != queue && remorder != stack && remorder != priorityqueue)
        {
            guesses.push_back("impossible");
        }
        else if (remorder == queue && remorder != stack && remorder != priorityqueue)
        {
            guesses.push_back("queue");
        } else if (remorder != queue && remorder == stack && remorder != priorityqueue)
        {
            guesses.push_back("stack");
        } else if (remorder != queue && remorder != stack && remorder == priorityqueue)
        {
            guesses.push_back("priority queue");
        } else if ((remorder == queue && remorder == stack) || (remorder == queue && remorder == priorityqueue) || (remorder == stack && remorder == priorityqueue))
        {
            guesses.push_back("not sure");
        }
    }

    for (int i = 0; i < guesses.size() - 1; i++)                                          
    {
        cout << guesses[i] << endl;
    }
}