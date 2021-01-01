#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(a==b)
  return 0;
  while(a!=0&&b!=0)
  {

    if(a<b)
    {
      b=b%a;
    }
    else if(b<a)
    a=a%b;
  }
  if(a!=0)
  return a;
  else
  return b;
}

int main()
{
  int n,k,g,j,temp,d=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  g=gcd(n,k);
  for(int i=0;i<g;i++)
  {
    j=i;
    temp=a[i];
    while(1)
    {
      d=(j+k)%n;
      if(d==i)
      break;
      a[j]=a[d];
      j=d;
    }
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
