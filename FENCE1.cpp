#include<bits/stdc++.h>

using namespace std;

int main()
{
int l;
cin>>l;

while(l != 0)
{
	double ans = (float)((l*l)/(6.28318));
	printf("%0.02f\n",ans);
	cin>>l;
}

return 0;
}

/*

when enclosing maximum , it form semi circle.

we get above formula by using circumferance and area of semi circle . [ 2*pi = 6.28318 ]
*/