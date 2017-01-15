#include <bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

while(tc--)
{
	int num;
	cin>>num;
	int count = 0;

	while(num >= 5)
	{
	count += num/5;
	num = num/5;
	}

	cout<<count<<endl;
}

return 0;
}