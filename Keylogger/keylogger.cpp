#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<char> msg;
    bool shift = false;
    bool clock = false;
    bool caps = false;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s == "dink" || s == "thumb")
        {
            shift = !shift;
        }

        if (s == "bump")
        {
            clock = !clock;
        }
        
        if (shift == false && clock == false)
        {
            caps = false;
        } else if (shift == false && clock == true)
        {
            caps = true;
        } else if (shift == true && clock == true)
        {
            caps = false;
        } else if (shift == true && clock == false)
        {
            caps = true;
        }

        if (s == "clank")
        {
            caps == false ? msg.push_back('a') : msg.push_back('A');
        }
        if (s == "bong")
        {
            caps == false ? msg.push_back('b') : msg.push_back('B');
        }
        if (s == "click")
        {
            caps == false ? msg.push_back('c') : msg.push_back('C');
        }
        if (s == "tap")
        {
            caps == false ? msg.push_back('d') : msg.push_back('D');
        }
        if (s == "poing")
        {
            caps == false ? msg.push_back('e') : msg.push_back('E');
        }
        if (s == "clonk")
        {
            caps == false ? msg.push_back('f') : msg.push_back('F');
        }
        if (s == "clack")
        {
            caps == false ? msg.push_back('g') : msg.push_back('G');
        }
        if (s == "ping")
        {
            caps == false ? msg.push_back('h') : msg.push_back('H');
        }
        if (s == "tip")
        {
            caps == false ? msg.push_back('i') : msg.push_back('I');
        }
        if (s == "cloing")
        {
            caps == false ? msg.push_back('j') : msg.push_back('J');
        }
        if (s == "tic")
        {
            caps == false ?msg.push_back('k') : msg.push_back('K');
        }
        if (s == "cling")
        {
            caps == false ? msg.push_back('l') : msg.push_back('L');
        }
        if (s == "bing")
        {
            caps == false ? msg.push_back('m') : msg.push_back('M');
        }
        if (s == "pong")
        {
            caps == false ? msg.push_back('n') : msg.push_back('N');
        }
        if (s == "clang")
        {
            caps == false ? msg.push_back('o') : msg.push_back('O');
        }
        if (s == "pang")
        {
            caps == false ? msg.push_back('p') : msg.push_back('P');
        }
        if (s == "clong")
        {
            caps == false ? msg.push_back('q') : msg.push_back('Q');
        }
        if (s == "tac")
        {
            caps == false ? msg.push_back('r') : msg.push_back('R');
        }
        if (s == "boing")
        {
            caps == false ? msg.push_back('s') : msg.push_back('S');
        }
        if (s == "boink")
        {
            caps == false ? msg.push_back('t') : msg.push_back('T');
        }
        if (s == "cloink")
        {
            caps == false ? msg.push_back('u') : msg.push_back('U');
        }
        if (s == "rattle")
        {
            caps == false ? msg.push_back('v') : msg.push_back('V');
        }
        if (s == "clock")
        {
            caps == false ? msg.push_back('w') : msg.push_back('W');
        }
        if (s == "toc")
        {
            caps == false ? msg.push_back('x') : msg.push_back('X');
        }
        if (s == "clink")
        {
            caps == false ? msg.push_back('y') : msg.push_back('Y');
        }
        if (s == "tuc")
        {
            caps == false ? msg.push_back('z') : msg.push_back('Z');
        }
        if (s == "whack")
        {
            msg.push_back(' ');  
        }
        if (s == "pop" && msg.size() > 0)
        {
            msg.pop_back();
        }
    }

    for (int i = 0; i < msg.size(); i++)
    {
        cout << msg[i];
    }

    
}   