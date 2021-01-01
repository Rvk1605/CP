#include<iostream>
using namespace std;
int main()
{
  int c,h,n,t=0;
  cin>>c>>h>>n;
  for(int i=1;i<=n;i++)
  {
    t=t+i*c;
  }
  if(t-h>0)
  cout<<t-h;
  else
  cout<<"0";
}
