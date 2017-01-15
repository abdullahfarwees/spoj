#include<bits/stdc++.h>

using namespace std;

int main()
{
int count = 0;
int n;
cin>>n;

int sq_val = sqrt(n);

for(int i=1;i<=sq_val;i++)
{
 for(int j=i; i*j <= n ; j++)
 {
  ++count;
 }
}


cout<<count<<endl;


return 0;
}