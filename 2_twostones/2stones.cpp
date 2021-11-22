#include <iostream>
using namespace std;

int main()
{
	int stones;
	cin >> stones;
	
	stones = stones % 2;
	
	if (stones == 0)
	{
		cout << "Bob";
	} else
	{
		cout << "Alice";
	}
}
