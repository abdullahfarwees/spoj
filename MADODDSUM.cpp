#include<bits/stdc++.h>

using namespace std;

int main()
{

long long int a,b , sum = 0;
cin>>a>>b;

for(int i=a; i<=b; i++)
{
if(i%2 != 0)
{
sum += i;
}

}

cout<<sum<<endl;

return 0;
}