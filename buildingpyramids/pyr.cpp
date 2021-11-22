#include <iostream>
#include <string>
using namespace std;

//Note -- odd number formula is On = 2[i] + 1. 
int curLevel = 1;
int numBlocks;
int odd(int num);
int build();

int main()
{
	int num; cin >> num;
	while (build() < num)
	{
		num -= build();
		curLevel++;
	} cout << curLevel;
}
int build()
{
	numBlocks = odd(curLevel) * odd(curLevel);
	return numBlocks;
}
int odd(int num)
{
	return (2 * num + 1);
}
