#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num; cin >> num;
	string words[(num/2)+1];
	int curPos = 0;
	for (int i=0;i<num;i++)
	{
		string word; cin >> word;
		if (i%2==0)
		{
			words[curPos] = word;
			curPos++;
		}
	}
	
	for (int i=0; i<((num/2)+1); i++)
	{
		cout << words[i] << endl;
	}
}
