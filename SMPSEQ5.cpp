#include <bits/stdc++.h>

using namespace std;

int max_fun(int a, int b)
{
return a>b?a:b;
}

int main()
{


int s_ , q_;

cin>>s_;
int s[s_];
for(int k=1;k<=s_;k++){cin>>s[k];}

cin>>q_;
int q[q_];
for(int p=1;p<=q_;p++){cin>>q[p];}

int max = max_fun(s_ , q_);

for(int i=1;i<=max; i++)
{
	if(s[i] == q[i])cout<<i<<" ";
}


return 0;
}