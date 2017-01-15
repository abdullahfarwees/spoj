#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

/* remove this func later... */
long long abs_fun(long long num)
{

	if(num < 0)
	return num;
	else
	return num;
}


void fun()
{

int a,b,c;

cin>>a>>b>>c;

if(a==0 && b==0 && c== 0) 
{
exit(0);
}

while(true)
{
	/* terminate test case */

if(a!=b && a!=c && b!=c)
{
		
		if( (2*b) == (a+c) )
		{
		long long ap = abs_fun((b+c)-a);
		cout<<"AP"<<" "<<ap<<endl;
		
		}
		else 
		{
		long long gp = abs_fun((b*c)/a);
		cout<<"GP"<<" "<<gp<<endl;
		}

}
else
{
	continue;
}

	cin>>a;
	cin>>b;
	cin>>c;

	if(a==0 && b==0 && c== 0) 
	{
	exit(0);
	}

}


}

int main()
{

fun();

return 0;
}