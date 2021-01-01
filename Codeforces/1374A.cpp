#include<iostream>
using namespace std;
long long int check()
{
  long long int x,y,n,r;
  cin>>x>>y>>n;
  if(x>n)
  return 0;
  else
  {
    r=n-((x-y)+(n%x));
  }
}
int main()
{
  int t;
  cin>>t;
  long long int a[t];
  for(int i=0;i<t;i++)
  a[i]=check();
  for(int i=0;i<t;i++)
  cout<<a[i]<<endl;
}
