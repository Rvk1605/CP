#include<iostream>
using namespace std;
void check()
{
  int n,x,c=1;
  cin>>n>>x;
  if(n==1||n==2)
  c=0;
  else
  {
    n=n-2;
    c=n/x;
    if(n%x>0)
    c++;
  }
  cout<<c+1<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
