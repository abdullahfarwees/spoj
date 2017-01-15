#include<bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

int count = 1;
	long long ans;


while(tc--)
{

//	cin>>r;
	long long r;
	scanf("%lld",&r);
	ans = ((4)*(r*r));

	//printf("case %d: %0.2lf\n",count,ans);
	cout<<"Case "<<count<<": "<<ans<<".25"<<endl;
	count++;
}


return 0;
}