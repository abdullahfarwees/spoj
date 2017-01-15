#include<bits/stdc++.h>

using namespace std;

int fun(int arr[],int size,int pos,int count)
{

if(size == pos)return count;
else
{
	count += arr[pos];
	fun(arr,size,pos+1,count);
}

}

int main()
{
int case_num = 0 , count = 0;
int tc;
cin>>tc;

while(tc--)
{

	int size,pos = 0;
	cin>>size;
	int arr[size];

	for(int i=0;i<size;i++)cin>>arr[i];

	++case_num;
	cout<<"Case "<<case_num<<": "<<fun(arr,size,pos,count)<<endl;

}

return 0;
}