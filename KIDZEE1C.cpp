#include<bits/stdc++.h>

using namespace std;

int main()
{
int num;
int tc;
cin>>tc;

while(tc--)
{
cin>>num;

	if(num % 3 == 0)
	{
	cout<<num<<" is a multiple of 3"<<endl;
	}
	else
	{
	cout<<num<<" is not a multiple of 3"<<endl;
	}

}

return 0;
}

/*

Input:

3

1

6

10

 Output:

1 is not a multiple of 3
6 is a multiple of 3
10 is not a multiple of 3

*/