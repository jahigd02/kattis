#include <iostream>
#include <string>
using namespace std;

int main()
{
	string problems; cin >> problems;
	int sum;
	for(int i=0;i<problems.length();i++)
	{
		if(problems[i] == '-')
		{
			int j = i;
			while (problems[j-1] != '-' || problems[j-1] != ';') //search left for num;
			{
				j--;
			}
			string leftNumString = problems.substr(j, (i-j));
			int leftNum = stoi(leftNumString);
			
			int k = i;
			while (problems[k+1] != '-' || problems[k+1] != ';') //search right for num;
			{
				k++;
			}
			string rightNumString = problems.substr(i, (k-i));
			int rightNum = stoi(rightNumString);
			//sum+= (stoi(problems.substr(i+1,1)) - stoi(problems.substr(i-1,1))) + 1;
			
			sum+=rightNum-leftNum+1;
		} else if (problems[i]==';')
		{
			//sum++;
		}
	}
	cout << sum;
}

