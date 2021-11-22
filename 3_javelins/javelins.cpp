#include <iostream>
using namespace std;

int main()
{
	int numRods;
	cin >> numRods;
	
	int len = 0;
	int curRod;
	
	for (int i = 0; i < numRods; i++)
	{
		cin >> curRod;
		if (i == 0)
		{
			len += curRod;
		} else {
			len += curRod -1;
		}
	}
	
	cout << len;
}
