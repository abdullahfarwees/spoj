#include<bits/stdc++.h>

using namespace std;

int main()
{
int count = 0;

string str;
cin>>str;

int len = str.size();

for(int i=0; i<len; i++)
{

	if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
	{
		++count;
	}
}

cout<<count<<endl;
return 0;
}


/*

VOWELS - Vowels
no tags 

Count the number of vowels (a,e,i,o,u,y) in a “word”. Include both uppercase and lowercase vowels in your count.

Input:

A sequence of alphabetic characters (no spaces), with length at most 10,000.

Output:

The number of vowels.

Example Input 1: 	Example Input 2:

ObjectOriented

	

XKCD

Example Output 1: 	Example Output 2:

6

	

0


*/