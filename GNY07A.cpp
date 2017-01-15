#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	string str;
	int tc;
	cin>>tc;

	int count = 1;

	while(tc--)
	{
		cin>>k;
		cin>>str;

		int size = str.size();
	

		cout<<count++<<" ";
		for(int i=0;i<size;i++)
		{
			if(i != k-1)
			cout<<str[i];

		}
	
	cout<<endl;
	}





return 0;
}
