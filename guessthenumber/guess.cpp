#include <iostream>
#include <string>
using namespace std;

int main()
{
	int mid;
	int min = 1; int max = 1000;
	string res;
	while (res != "correct")
	{
		mid = ((min + max)/2);
		cout << mid << endl << flush;
		cin >> res;
		if(res == "lower")
		{
			max = mid;
		} else if (res == "higher")
		{
			min = mid;
		} else {
			exit(0);
		}	
	}
	
}
