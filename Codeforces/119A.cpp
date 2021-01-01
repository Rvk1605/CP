#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,n,c=1;
  cin>>a>>b>>n;
  while(n>0)
  {
    if(c%2==1)
    n=n-__gcd(a,n);
    else
    n=n-__gcd(b,n);
    c++;
  }
  if(c%2==0)
  cout<<0<<endl;
  else
  cout<<1<<endl;

}
