#include<iostream>
using namespace std;
int check()
{
  int a,b;
  cin>>a>>b;
  if(a<b)
  {
    if(2*a<b)
    return b*b;
    else
    {
      return (2*a)*(2*a);
    }
  }
  else
  {
    if(2*b<a)
    return a*a;
    else
    {
      return (2*b)*(2*b);
    }
  }
}
int main()
{
  int t;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  a[i]=check();
  for(int i=0;i<t;i++)
  cout<<a[i]<<endl;
}
