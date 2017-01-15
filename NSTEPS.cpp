#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void fun()
{
	int x,y;
	cin>>x>>y;
	
	if( x == y )
	{
		if( x % 2 == 0 )
		{
			cout<<(x+y)<<endl;
		//	exit(0);
		}
		else
		{
			cout<<((x+y)-1)<<endl;
		//	exit(0);
		}
	}
	else if( x == (y+2) )
	{
		if( x % 2 == 0 )
		{
			cout<<(x+y)<<endl;
		//	exit(0);
		}
		else
		{
			cout<<((x+y)-1)<<endl;
		//	exit(0);
		}
		
	}
	else
	{
		cout<<"No Number"<<endl;
	//	exit(0);
	}
	
	
	return;
}

int main() {
	int tc;
	cin>>tc;
	
	for(int t=0;t<tc;t++)fun();
	
	// your code here

	return 0;
}