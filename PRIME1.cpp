#include<bits/stdc++.h>

using namespace std;

bool prime_gen_core(long long num)
{

if( num < 2)return false;

long long int sq_value = sqrt(num);

  for(long long i=2; i <= sq_value; i++)
  {
    if(num%i == 0)
    {
      return false;
    }
  }

return true;
}

int main()
{
  int tc;
  scanf("%d",&tc);

  for(int t=0;t<tc;t++)
  {
   

  long long start_point;
  long long end_point;

  scanf("%lld",&start_point);
  scanf("%lld",&end_point);

  for(long long i=start_point; i<=end_point; ++i)
  {
    if(prime_gen_core(i))
    {
      printf("%lld\n",i);
    }
  }

  printf("\n");



  }

  return 0;
}
