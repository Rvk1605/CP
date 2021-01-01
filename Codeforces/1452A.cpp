#include<bits/stdc++.h>
using namespace std;
void check()
{
  int x,y,c=0;
  cin>>x>>y;
  if(x==0||y==0)
  c=0;
  else if(x==y)
  c=2*x;
  else if(x==0||y==0)
  c=2*abs(x-y)-1;
  else if(abs(x-y)==1)
  c=x+y;
  else
  
  cout<<c<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
