#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
  string s1; cin >> s1;
  int s1a = 0;
  string s2; cin >> s2;
  int s2a = 0;

  for (int i = 0; i < s1.length(); i++)
  {
      if (s1[i]!='h')
      {
          s1a++;
      }
  }
  for (int i = 0; i < s2.length(); i++)
  {
      if (s2[i]!='h')
      {
          s2a++;
      }
  }

  if (s1a>s2a || s1a==s2a)
  {
      cout << "go";
  } else 
  {
      cout << "no";
  }

}