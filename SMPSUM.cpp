#include<iostream>

using namespace std;

int main()
{

long long int a,b, sum = 0;
cin>>a>>b;

for(long long int i = a; i<=b; i++)
{
sum = sum + (i*i);
}

cout<<sum<<endl;
return 0;
}