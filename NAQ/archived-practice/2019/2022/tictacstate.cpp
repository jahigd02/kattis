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
    int C; cin >> C;
    vector<string> results;

    for (int i = 0; i < C; i++)
    {

        string s; cin >> s;
        vector<int> game;

        for (int i = 0; i < s.length(); i++)
        {
            if (i==0)
            {
                continue;
            } else
            {
                if (s[i] == '1')
                {
                    game.push_back(0);
                    game.push_back(0);
                    game.push_back(1);
                } else if (s[i] == '0')
                {
                    game.push_back(0);
                    game.push_back(0);
                    game.push_back(0);
                } else if (s[i] == '2')
                {
                    game.push_back(0);
                    game.push_back(1);
                    game.push_back(0);
                } else if (s[i] == '3')
                {
                    game.push_back(0);
                    game.push_back(1);
                    game.push_back(1);
                } else if (s[i] == '4')
                {
                    game.push_back(1);
                    game.push_back(0);
                    game.push_back(0);
                } else if (s[i] == '5')
                {
                    game.push_back(1);
                    game.push_back(0);
                    game.push_back(1);
                } else if (s[i] == '6')
                {
                    game.push_back(1);
                    game.push_back(1);
                    game.push_back(0);
                } else if (s[i] == '7')
                {
                    game.push_back(1);
                    game.push_back(1);
                    game.push_back(1);
                }
            }
        }

        while (game.size() != 32)
        {
            game.insert(game.begin(), 0);
        }

        reverse(game.begin(), game.end());

        int xc = 0;
        int oc = 0;
        for (int i = 9; i < 18; i++)
        {
            if (game[i] == 1)
            {
                xc++;
            } else
            {
                oc++;
            }
        }

        int count = 0;
        for (int i = 0; i < 9; i++)
        {
            if (game[i] == 1)
            {
                count++;
            }
        }
            //HORIZONTALS
            if (game[9] == 1 && game[0] == 1 && game[10] == 1 && game[1] == 1 && game[11] == 1 && game[2] == 1)
            {
                results.push_back("X wins");
            } else if (game[9] == 0 && game[0] == 1 && game[10] == 0 && game[1] == 1 && game[11] == 0 && game[2] == 1)
            {
                results.push_back("O wins");
            } else if (game[12] == 1 && game[3] == 1 && game[13] == 1 && game[4] == 1 && game[14] == 1 && game[5] == 1)
            {
                results.push_back("X wins");
            } else if (game[12] == 0 && game[3] == 1 && game[13] == 0 && game[4] == 1 && game[14] == 0 && game[5] == 1)
            {
                results.push_back("O wins");
            } else if (game[15] == 1 && game[6] == 1 && game[16] == 1 && game[7] == 1 && game[17] == 1 && game[8] == 1)
            {
                results.push_back("X wins");
            } else if (game[15] == 0 && game[6] == 1 && game[16] == 0 && game[7] == 1 && game[17] == 0 && game[8] == 1)
            {
                results.push_back("O wins");
            }  
            //VERTICALS
            else if (game[9] == 1 && game[0] == 1 && game[12] == 1 && game[3] == 1 && game[15] == 1 && game[6] == 1)
            {
                results.push_back("X wins");
            } else if (game[9] == 0 && game[0] == 1 && game[12] == 0 && game[3] == 1 && game[15] == 0 && game[6] == 1)
            {
                results.push_back("O wins");
            } else if (game[10] == 1 && game[1] == 1 && game[13] == 1 && game[4] == 1 && game[16] == 1 && game[7] == 1)
            {
                results.push_back("X wins");
            } else if (game[10] == 0 && game[1] == 1 && game[13] == 0 && game[4] == 1 && game[16] == 0 && game[7] == 1 )
            {
                results.push_back("O wins");
            } else if (game[11] == 1 && game[2] == 1 && game[14] == 1 && game[5] == 1 && game[17] == 1 && game[8] == 1)
            {
                results.push_back("X wins");
            } else if (game[11] == 0 && game[2] == 1 && game[14] == 0 && game[5] == 1 && game[17] == 0 && game[8] == 1)
            {
                results.push_back("O wins");
            }
            //DIAGONALS
            else if (game[9] == 1 && game[0] == 1 && game[13] == 1 && game[4] == 1 && game[17] == 1 && game[8] == 1)
            {
                results.push_back("X wins");
            } else if (game[9] == 0 && game[0] == 1 && game[13] == 0 && game[4] == 1 && game[17] == 0 && game[8] == 1)
            {
                results.push_back("O wins");
            } else if (game[11] == 1 && game[2] == 1 && game[13] == 1 && game[4] == 1 && game[15] == 1 && game[6] == 1)
            {
                results.push_back("X wins");
            } else if (game[11] == 0 && game[2] == 1&& game[13] == 0 && game[4] == 1 && game[15] == 0 && game[6] == 1)
            {
                results.push_back("O wins");
            } else if (count != 9)
            {
                results.push_back("In progress");
            } else
            {
                results.push_back("Cat's");
            }
    }
    
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }
}