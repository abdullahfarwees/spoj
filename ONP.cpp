#include <bits/stdc++.h>

using namespace std;

int main()
{

int tc;
cin>>tc;

while(tc--)
{

char str[401];
scanf("%s",&str);

int len = strlen(str);

stack<char> stk;

for(int i=0;i<len;i++)
{

	if( str[i] == '(')
	{
	//	i++;
	}
	else if( str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
	{
		stk.push(str[i]);
	}
	else if( str[i] == ')')
	{
	//	i++;
		cout<<stk.top();
		stk.pop();
	}
	else
	{
		cout<<str[i];
	}
	
	
}
cout<<endl;

} // end testcase

return 0;
}