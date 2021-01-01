#include<iostream>
using namespace std;
void check()
{
  int a,b,n,c=0;
  cin>>a>>b>>n;
  while(a<=n||b<=n)
  {
    if(a<b)
    {
    a=a+b;
    c++;
    }
    else if (a>b)
    {
    b=a+b;
    c++;
    }
  }
  cout<<c-1<<endl;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();a
}
