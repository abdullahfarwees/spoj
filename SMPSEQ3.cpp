#include <bits/stdc++.h>

using namespace std;

bool check(long long int *arr , long long int x ,long long int SIZE)
{

long long int start,mid,end;

start = 0;
end = SIZE-1;

mid = (start+end)/2;

while(start <= end)
{

	if(arr[mid] == x)
	{
		return true;
	}
	else if( arr[mid] < x)
	{
		start = mid+1;
	}
	else
	{
		end = mid-1;
	}

	mid = (start+end)/2;

}// while loop end

return false;
}

int main()
{

long long int size1, size2;

cin>>size1;
long long int arr1[size1];
for(long long int i=0;i<size1;i++)
{
	cin>>arr1[i];
}

cin>>size2;
long long int arr2[size2];
for(long long int i=0;i<size2;i++)
{
	cin>>arr2[i];
}

/* search element of each element in second arr2 */
for(long long int i=0; i<size1 ; i++)
{
	if(!check(arr2 , arr1[i] , size2 ))
	{
		cout<<arr1[i]<<" ";
	}
}

return 0;
}