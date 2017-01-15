#include<bits/stdc++.h>

using namespace std;

int main()
{
long long int n;
scanf("%lld",&n);

long long int a,b;

while(n--)
{
scanf("%lld %lld",&a,&b);
printf("%lld\n",a*b);

}

return 0;
}



































/*

INOUTEST - Enormous Input and Output Test

Similar to that of the problem Enormous Input Test, the purpose of this problem is to determine whether your method of reading input data and writing output data is fast enough to process extremely large test cases.
Input

The first line of input contains a single integer N (1 ≤ N ≤ 10^6), denoting the number of lines to follow. Each of these lines contains two space-separated integers a and b (|a|, |b| ≤ 40,000).
Output

For each pair a and b, write a single line of output containing the value of a × b.
Example

Input:
5
-1 -1
1 1
0 999
654 321
39999 -39999

Output:
1
1
0
209934
-1599920001

*/