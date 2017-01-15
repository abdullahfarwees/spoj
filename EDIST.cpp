#include<bits/stdc++.h>

//#define min(a,b) ((a>b)?(a):(b))

using namespace std;

int min(int a, int b, int c)
{

	if(a<b && a<c)return a;
	else if(b < c)return b;
	else return c;

}

int edit(string str1,int m,string str2, int n)
{
int dp[m+1][n+1];

for(int i=0;i<=m; i++)
{
	for(int j=0;j<=n;j++)
	{
		if(i == 0 )dp[i][j] = j; // if str1 empty
		else if(j == 0 )dp[i][j] = i; // if str2 empty
 		
		else if(str1[i-1] == str2[j-1])
		{
			// ignore
			dp[i][j] = dp[i-1][j-1];
		}
		else
		{
			dp[i][j] = 1+min( dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1] ); // 1.insert 2.remove 3.replace
		}


	}

}

return dp[m][n];
}

int main()
{
int tc;
cin>>tc;

while(tc--)
{

	string str1,str2;
	cin>>str1>>str2;

	//int m = str1.size();
	//int n = str2.size();

	cout<<edit(str1,str1.length(),str2,str2.length())<<endl;

} // tc


return 0;
}