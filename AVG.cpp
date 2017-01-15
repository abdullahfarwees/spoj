#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	
	for(long long int i=0;i<t; i++)
	{
		long long int n;
		cin>>n;
		
		long long int p , avg = 0;
		
		for(long long int k=0;k<n;k++)
		{
			cin>>p;
			avg = avg + p;
		}	
		cout<<(avg/n)<<endl;
	}

	return 0;
}