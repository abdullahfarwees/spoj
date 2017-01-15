#include<bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

long long int num;
while(tc--)
{
int count = 0;

cin>>num;
while(num != 0)
{
	if(num%2 != 0)
	{
		num = num-1;
	}
	else
	{
		num = num/2;
	}

count++;
}

if(count%2 == 0)
{
	cout<<"Akash\n";
}
else
{
	cout<<"Aayush\n";
}





}

return 0;
}




/*

NOVICE51 - A Simple Game
no tags 

 
Akash and Aayush play the following number game. First they choose a number N (1<=N<=1000000000). Then both
of them take their turn one by one. In a turn player has to subtract 1 from the number if it is odd 
or divide the number by 2 if it is even. Game end when the number becomes zero.
Aayush has a dominating natue So he always play first. Help them in finding out who will win the game.

Akash and Aayush play the following number game. First they choose a number N (1<=N<=1000000000). Then both of them take their turn one by one. In a turn player has to subtract 1 from the number if it is odd or divide the number by 2 if it is even. Game end when the number becomes zero. Aayush has a dominating nature So he always play first. Help them in finding out who will win the game.
Input

First line contains T, the number of test cases.  Following T lines contain 1 integer each, the value of N.
Output

For each test case print "Aayush" if Aayush wins else print "Akash".
Example

Input:
2
468
7547

Output:
Aayush
Akash



*/