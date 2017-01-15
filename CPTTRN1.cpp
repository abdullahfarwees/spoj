#include <bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;


while(tc--)
{

	int row,col;
	cin>>row>>col;

	char mat[row][col];

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)	
		{
			if( (i+j)%2 == 0 )
			{
				cout<<"*";
			}
			else
			{
				cout<<".";
			}
		}
		cout<<endl;
	}
	cout<<endl<<endl;

}


return 0;
}

/*

CPTTRN1 - Character Patterns (Act 1)
#basics

Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern. The first character printed should be * (asterisk).
Input

You are given t < 100 - the number of test cases and for each of the test cases two positive integers: l - the number of lines and c - the number of columns in the pattern (l, c < 100).
Output

For each of the test cases output the requested pattern (please have a look at the example). Use one line break in between successive patterns.
Example

Input:
3
3 1
4 4
2 5

Output:
*
.
*

*.*.
.*.*
*.*.
.*.*

*.*.*
.*.*.

*/