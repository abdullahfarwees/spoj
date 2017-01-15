#include<bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

while(tc--)
{
	unsigned int count = 0 , n;
	cin>>n;

	while(n)
	{
		count += n&1;
		n >>= 1;
	}
	cout<<count<<endl;

}
return 0;
}


/*


BITCNTR - Bit counts
no tags 

You are a detective working with Scotland Yard on a high-profile bank robbery case. The robber has left some trails in the form of numbers, which you believe will give you important clues about the robbery. Since you are genius, you know that the clues can obtained by converting the number in binary and counting the number of 1's. 
Input

The first line has a number t followed by t lines. Each line contains a number < 512.
Output

Output t lines corresponding to each number, such that each of the line contains the clue obtained from the number.
Example

Input:
5
2
3
1
0
11

Output:
1
2
1
0
3





*/